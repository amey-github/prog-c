 #include <stdio.h>
 int main (void)
{
    int num=0, i=0, sum=2, a=0, b=1;
    printf("enter num = ");
    scanf("%d", &num);

    printf("1  1  2");
    for(i=2 ; i<=num ; i++)
    {
        a=sum;
        sum=sum+b;
        printf("  %d", sum);
        b=a;
    }
}
