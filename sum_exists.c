#include <stdio.h>

int check (int sum, int *p);
int x, n, i, b, j;

void main()
{
    printf("enter n = " );
    scanf(" %d", &n);
    int A[n];
    A[n] = 0;

    for(i=0 ; i<n ; i++)
    {
        scanf(" %d", (A+i));
    }
    printf("\n");

    printf("enter x = ");
    scanf(" %d", &x);

    if(check(x, A)==1)
        printf("\nsum exists");

    else
        printf("\nsum does not exist");
} //main()

int check(int sum, int *p)
{
    for(i=0 ; i<n ; i++)
    {
        b = sum - *(p+i);
        for(j=i ; j<n ; j++)
        {
            if(*(p+j) == b)
                return 1;
        } //for j
    }//for i
}//check
