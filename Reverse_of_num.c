 #include <stdio.h>
 int main (void)
{
    int num=0, rev=0;
    printf("enter num = ");
    scanf("%d", &num);

    do
    {
        rev = rev*10 + (num%10);
        num = num/10;
    }while (num>0);

    printf("%d", rev);
}
