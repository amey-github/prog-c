#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];

    puts("Enter a word : ");
    gets(str);

    int i, len, count=0;

    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i] == str[i+1])
            continue;

        else
        {
            printf("%d,%c\n",i , str[i]);
            count++;
        }
    }
}
