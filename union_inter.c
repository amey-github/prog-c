#include <stdio.h>

int* sort(int a[], int len);

void main()
{
    int i, j, ctr=0 , n, n1, n2, flag, ele;


    //input array1
    scanf("%d", &n1);
    int arr1[n1];


    printf("Array1 = ");

    for(i=0 ; i<n1 ; i++)
        scanf("%d", &arr1[i]);


    //input array2
    scanf("%d", &n2);
    int arr2[n2];

    printf("\nArray2 = ");

    for(i=0 ; i<n2 ; i++)
        scanf("%d", &arr2[i]);



    //find intersection

    printf("\nIntersection = ");
    n = (n1<n2)? n1 : n2;

    int in[n];

    for(i=0 ; i<n1 ; i++)
    {
        for(j=0 ; j<n2 ; j++)
        {
            if(arr1[i]==arr2[j])
            {
                in[ctr] = arr1[i];
                ctr++;
            }//if
        }//for j
    }//for i


    for(i=0 ; i<ctr ; i++)
        printf("%d  ", in[i]);

    printf("\n");



    //find  union

    printf("\nUnion = ");
    int temp[n1+n2];



    //form array consisting all elements  of arr1, arr2
    for(i=0 ; i<n1 ; i++)
        temp[i] = arr1[i];

    for(i=n1 ; i<n1+n2 ; i++)
        temp[i] = arr2[i-n1];

    sort(temp, n1+n2);


    for(i=0 ; i<n1+n2-1 ; i++)
    {
        if(temp[i] == temp[i+1])
            continue;

        else
            printf("%d  ", temp[i]);
    }//for

    printf("%d", temp[n1+n2-1]);
}


int* sort(int a[], int len)
{
    int i, t, j, ctr=1;

    for(i=ctr ; i<len ; i++)
    {
        j=i;
        t = a[i];

        while(a[j-1]>t && j>0)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = t;
        ctr++;
    }

    return a;
}
