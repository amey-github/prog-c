#include <stdio.h>

void main()
{
    int i, j, n, ctr=11 ;

    printf("Enter num = ");
    scanf(" %d", &n);

    for(i=1 ; i<=n ; i++)
    {
       for(j=1 ; j<=i ; j++)
       {
            printf("%d  ", ctr);
            ctr = ctr + 2;
       }
       printf("\n");
    }
}
