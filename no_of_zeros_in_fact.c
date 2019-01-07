#include <stdio.h>

void main()
{
    int i, j, count, N, T, k;

    scanf("%d", &T);
    int arr[T];

    for(i=0 ; i<T ; i++)
    {
        count = 0;
        scanf("%d", &N);

        for(k=1 ; k<=N ; k++)
        {
            j=k;
            while(j>0)
            {
                if(j%5==0)
                {
                    count++;
                    j = j/5;
                }//if

                else
                    break;
            }//while
        }//for j
        arr[i] = count;
    }

    for(i=0 ; i<T ; i++)
        printf("%d\n", arr[i]);
}
