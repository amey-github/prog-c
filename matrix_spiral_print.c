#include <stdio.h>

int flag=1, ctr=0;
void check();

void main()
{
    int m, n, i, j;

    printf("enter n = " );
    scanf(" %d", &n);

    printf("enter m = " );
    scanf(" %d", &m);

    int A[n][m];
    A[n][m] = 0;

    int total = n*m;
    n--;
    m--;

    while(flag <= total)
    {
        for(; j<=m-ctr ; j++)
        {
            printf("%d  ", A[i][j]);
            flag++;
        }//print row L to R

        check();

        for( ; i<=n-ctr ; i++)
        {
            printf("%d  ", A[i][j]);
            flag++;
        }//print column T to B

        check();

        for(; j>=ctr ; j--)
        {
            printf("%d  ", A[i][j]);
            flag++;
        }//print row R to L

        check();

        for( ; i>=ctr ; i--)
        {
            printf("%d  ", A[i][j]);
            flag++;
        }//print column B to T

        check();
    }
}
void check(int f)
{
    if(f%3==0)
        ctr++;
} //change boundary conditions
