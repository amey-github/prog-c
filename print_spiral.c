#include <stdio.h>

void rotate(int m, int n, int tmp[][m], int arr[][n]);
void input(int m, int n, int arr[][n]);

int tot = 0, ctr = 1;

void main()
{
    int m, n, i;

    printf("m = ");
    scanf("%d", &m);

    printf("n = ");
    scanf("%d", &n);

    int arr[m][n];
    int tmp[n][m];

    printf("\n");

    input(m, n, arr);

    for(i=0 ; i<n ; i++)
    {
        printf("%d  ", arr[0][i]);
        tot++;
    }

    while(tot <= (m*n))
    {
        if(ctr%2==1)
            rotate(m, n, tmp, arr);

        else
            rotate(n, m, arr, tmp);
    }
}

void input(int m, int n, int arr[][n])
{
    int i, j;

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}


void rotate(int m, int n, int tmp[][m], int arr[][n])
{
    ctr++;
    printf("\n\nctr = %d\n\n", ctr);

    int i,j,ele;

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            tmp[j][m-1-i] = arr[i][j];
        }
    }

    if(ctr%2==1)
    {
        for(i=0 ; i<m ; i++)
        {
            printf("%d  ", tmp[0][i]);
            tot++;
        }
    }

    else
    {
        for(i=m-1 ; i>=0 ; i--)
        {
            printf("%d  ", tmp[n-1][i]);
            tot++;
        }
    }
}
