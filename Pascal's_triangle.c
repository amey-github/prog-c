#include <stdio.h>
void main()
{
    int a=0, i=0, k=0, n=0, temp=0, j=0, sum=0, b=0, len=0;

    printf("Enter n = ");
    scanf("%d", num);

    len = 2*num-1;

    int x[len] = {0};
    int y[len] = {0};

    y[len/2] = 1;
    t=len/2;

    for(i=1 ; i<=num ; i++)
    {
        for(j=0 ; j<=(2*num-1) ; j++ )
        {
            if(x[j] == 0)
                continue;
            else
            {
                a=b;
                b = x[j];
                sum = a+b;
                y[t-1] = sum;
            }
            for()
            x=y;
            y=0;
            for(k=0 ; k<=len-1 ; k++)
            {
                if(y[k] == 0)
                    printf("\t");

                else
                    printf("%d", y[k]);
        }
    }
}
