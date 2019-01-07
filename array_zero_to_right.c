#include <stdio.h>

void main()
{
    int i, j, m, n, k, tmp;

    int arr[4][4] = {{20,19,17,0} , {0,13,14,0} , {0,14,16,0} , {0,0,0,1}}; //m=4, n=4
    m=4;
    n=4;

    int count[4] = {}; //m=4

    for(i=0 ; i<m ; i++)
    {
        for(j=n-1 ; j>=0 ; j--)
        {
            if(arr[i][j]==0)
            {
                k=j;
                count[i]++;

                while(k<=(n-1)-1)
                {
                    tmp = arr[i][k+1];
                    arr[i][k+1] = 0;
                    arr[i][k] = tmp;
                    k++;
                }
            }
        }
    }


    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("--- %d\n", count[i]);
    }
}
