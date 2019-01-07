#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[50]={}, rep [10] = {}, word[10] = {};
    int i=0, j1=0, j2=0, k=0, offset=0, count=0;

    printf("str = ");
    gets(str);

    printf("word = ");
    gets(word);

    printf("rep = ");
    gets(rep);

    while(str[i]!='\0')
    {
        BLANK : while(str[i]!=' ' && str[i]!='\0')
                    i++;

        //printf("\ni = %d", i);

        count = 0;

            j2=i;
            offset=j1;

            char substr[10] = {};

            //printf("\nj1 = %d", j1);
            //printf("\nj2 = %d", j2);

            for( ; j1<j2 && str[j1]!='\0' ; j1++)
            {
                substr[count] = str[j1];
                count++;
            }
            //printf("\n%s", substr);

            if(strcmp(word, substr)==0)
            {
                for(k= 0; k<strlen(rep) ; k++)
                    str[offset+k] = rep[k] ;
            }

            //printf("\n%s", str);

            j1 = j2+1;
            i++;

            /*printf("\ni = %d", i);
            printf("\nj1 = %d", j1);
            printf("\nj2 = %d", j2);*/
    }

    puts("\n");
    puts(str);
}
