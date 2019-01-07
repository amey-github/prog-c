#include <stdio.h>
void main()
{
    int n=0, i=0, sum=1, t=1, temp=1;
    printf("enter n = ");
    scanf("%d", &n);

    printf("1");

    for(i=2 ; i<=n ; i++)
    {
        temp = (temp*10)+1;
        t = temp*i;
        printf(" + %d", t);
        sum = sum + t;
    }
    printf("\nsum of series = %d", sum);
}
