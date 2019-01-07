#include <stdio.h>

void input(int m, int n, int arr[][n]);
void rotate(int m, int n, int tmp[][m], int arr[][n]);

void main()
{
    int m, n;

    printf("m = ");
    scanf("%d", &m);

    printf("n = ");
    scanf("%d", &n);

    int arr[m][n];
    int tmp[n][m];

    printf("\n");

    input(m, n, arr);

    rotate(m, n, tmp, arr);
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
    int i,j,ele;

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            tmp[j][m-1-i] = arr[i][j];
        }
    }

    printf("\n");
    printf("Rotated Array = \n");

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            printf("%d  ", tmp[i][j]);
        }
        printf("\n");
    }
}
