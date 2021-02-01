#include <stdio.h>
#include <stdlib.h>
int main(int argc , char **argv)
{
    if(argc<3)
    {
        return 1;

    }
    FILE *SrcFilePt = fopen(argv[1], "rb");
    if (SrcFilePt==NULL)
    {
        return 2;

    }
    FILE *SrcFilePt2 = fopen(argv[2], "wb" ) ;
    if (SrcFilePt2==NULL)
    {
        return 3;

    }
    char buf[10];
    while (fread(buf, sizeof(buf), 1, SrcFilePt))
    {
        fwrite(buf, sizeof(buf), 1, SrcFilePt2);
    }
    fclose(SrcFilePt);
    fclose(SrcFilePt2);
}