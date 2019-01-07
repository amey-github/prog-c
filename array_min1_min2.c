#include <stdio.h>

//int check (int *p);
int min1, min2, n, i, j;

void main()
{
    printf("enter n = " );
    scanf(" %d", &n);
    int A[n];
    A[n] = 0;

    for(i=0 ; i<n ; i++)
        scanf(" %d", (A+i));

    min1 = *(A+n);
    min2 = *(A+n);

    for(i=0 ; i<n ; i++)
        min1 = (A[i] < min1)? A[i] : min1; //find min

    for(i=0 ; i<n ; i++)
        min2 = (A[i] > min1 && A[i] <min2)? A[i] : min2 ; //find 2nd mi

    printf("\nmin1 = %d", min1);
    printf("\nmin2 = %d", min2);
}
