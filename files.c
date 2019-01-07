#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void main(int argc , char *argv[])
{
    FILE *fp = NULL;
    char ch;

    fp = fopen(argv[1] , "r");

    if(fp == NULL)
    {
        puts("\nError !!\n");
        exit(0);
    }

    ch = fgetc(fp);

    while(ch!=EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fflush(fp);
    fclose(fp);
}
*/



    typedef union
    {
        int a;
        char b;
    }test;

void main()
{

    test t;
    t.a = 55555;
    t.b = 'A';

    printf("%d", t.a);
}
