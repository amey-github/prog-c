#include <stdio.h>
#include <string.h>

void main()
{
    char str[15], code[4]={};
    int i, j1, j2;

    printf("code = %s\n", code);

    i= j1 = j2 = 0;

    puts("Enter num  ");
    gets(str);

    while(str[j1]!= '\0')
    {
        if(str[j1]== '-')
                break;

        j1++;
    }

    printf("%d" , j1);
    j2 = j1+1;

    while(str[j2]!= '\0')
    {
        if(str[j2]== '-')
                break;

        j2++;
    }
    printf("\n%d" , j2);

    j1++;
    for( ; j1<j2 ; j1++)
    {
        code[i] = str[j1];
        i++;
    }

    puts("\n");
    puts(code);

    if(strcmp(code,"020")==0)
       puts("\npune");
}
