#include <stdio.h>
#include <math.h>

void main()
{
    int num, dig = 0 , n;

    printf("num = ");
    scanf("%d", &num);
    n = num;


    //to calc num of digits for array size
    if(n==0)
        dig = 1;

    else
    {
        while(n>0)
        {
            n = n/10;
            dig++;
        }
    }

    //to assign coeff to array
    int arr[dig], i=0;
    n = num;

    while(n>0)
    {
        arr[dig-i-1] = n%10;
        n = n/10;
        i++;
    }

    //print polynomial
    printf("P(x) = %d + ", arr[0]); //print constant t0

    for(i=1 ; i<dig-1 ; i++) //print all in between
    {
        if(arr[i]!=0)
            printf("%dx^%d + ", arr[i], i);
    }

    printf("%dx^%d\n", arr[dig-1], dig-1); //print last term tn


    //print P(c)

    int ans = 0, c;

    printf("c = ");
    scanf("%d", &c);

    for(i=0 ; i<dig ; i++)
        ans = ans + arr[i]*((int)pow(c,i));

    printf("P(c) = %d\n", ans);

    //modify polynomial, array

    dig++;

    int arr1[dig];

    arr1[0] = 0; //as co-eff of constant = 0, if non-zero earlier

    for(i=1 ; i<dig ; i++)      //re-assign vals
    {
        arr1[i] = c*arr[i-1];
    }



    //print changed polynomial
    printf("P1(x) = %d + ", arr1[0]); //print constant t0

    for(i=1 ; i<dig-1 ; i++) //print all in between
    {
        if(arr1[i]!=0)
            printf("%dx^%d + ", arr1[i], i);
    }

    printf("%dx^%d\n", arr1[dig-1], dig-1); //print last term tn
}
