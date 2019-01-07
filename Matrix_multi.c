#include <stdio.h>

int m, n;   //general input
int m1, n1, m2, n2; //for use in multiplication
int i, j, ctr = 1; //for loop variables
int b[100][100]; //for sake of declaration

void input(int a[][n]);

void main()
{

    //input size of array A
    printf("enter rows(A) = ");
    scanf(" %d", &m);
    m1 = m;

    printf("enter columns(A) = ");
    scanf(" %d", &n);
    n1 = n;

    int a[m][n];

    input(a);

    printf("\n");

    //input size of array B

    printf("rows(B) = %d", n1);
    m2 = n1;
    m = n1;

    printf("\nenter columns(B) = ");
    scanf(" %d", &n);
    n2 = n;

    b[m][n];

    input(b);
}

//input elements
void input(int a[][n])
{

    printf("\n");


    //input elements
    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
            {
                if(ctr==1)
                {
                    printf("a[%d][%d] = ", i+1, j+1);
                    scanf(" %d", &a[i][j]);
                    continue;
                } //for a

                if(ctr==2)
                {
                    printf("b[%d][%d] = ", i+1, j+1);
                    scanf(" %d", &b[i][j]);
                } //for b
            }
            printf("\n");
    }//for i

    //display matrix
    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
            {
                if(ctr==1)
                    printf("%d  ", a[i][j]);

                if(ctr==2)
                    printf("%d  ", b[i][j]);
            }
            printf("\n");
    }//for i
    ctr = 2;
}//input
