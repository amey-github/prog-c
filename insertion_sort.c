#include <stdio.h>

void main()
{
    int arr[5] = {3,0,-1,2,1};
    int length = 5, ctr=1;

    int i, j, tmp;

    for (i = ctr; i < length; i++)
    {
        j = i;
        tmp = arr[i];

        while (j > 0 && arr[j - 1] > tmp)
        {
            //tmp = arr[j];
            arr[j] = arr[j - 1];
            //arr[j - 1] = tmp;
            j--;
        }
        arr[j] = tmp;
        ctr++;
      }


    for(i=0 ; i<length ; i++)
        printf("%d  ", arr[i]);
}

