#include <stdio.h>

int check (int *p);
int n, i, j, k;

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

    for(k=0 ; k<n ; k++)
    {
        if(k==n-1)
        {
            printf("%d", *(A+k));
            break;
        } //print last value

        if(check(A+k)==1)
        {
            //printf("p ");
            printf("%d  ", *(A+k));
        }
    }
}

//check for leader
int check(int *p)
{
    for(i=0 ; i<n-1 ; i++)
    {
        for(j=i ; j<n-1 ; j++)
        {
            if(*(p+i) < *(p+j))
            {
                //printf("not this");
                return 0;
            }
        }//for i
        return 1;
    }//for i
} //check
