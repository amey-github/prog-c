#include <stdio.h>

void main()
{
    int i, j, num, ans[8];

    //input correct ans key
    scanf("%d", &num);

    //store ans key in array
    for(i=0 ; i<8 ; i++)
        ans[8-i-1] = num%10;


    //input and store ans keys of student attempts

    int arr[10][8];

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<8 ; j++)
        {
            scanf("%d", &num);
            arr[i][7-j] = num%10;
        }
    }

    //find, print num of students with q7 correct

    int count = 0;

    for(i=0 ; i<8 ; i++)
    {
        if(arr[i][6]==ans[6])
        {
            count++;
        }
    }

    printf("\nNum of students with Q7 correct = %d", count);

    //print marks for each student +4, -1

    int mks[10] = {0};

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<8 ; j++)
        {
            if(arr[i][j] == ans[i])
                mks[i] = mks[i] + 4;

            else
                mks[i] = mks[i] - 1;
        }
    }

    for(i=0 ; i<10 ; i++)
        printf("Mks %d = %d", i+1, mks[i]);
}
