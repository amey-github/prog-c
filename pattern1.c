 #include <stdio.h>
 int main (void)
{
    int n=0, i=0, j=0, k=0, b=0 ;
    printf("enter n = ");
    scanf("%d", &n);

    for(i=n ; i >= 1 ; i--)
    {
        for(j=1 ; j<=i ; j++)
            printf("%d\t", j);

        for(b=1 ; b<=(2*(n-i)) ; b++)
            printf("\t");

        for(k=i ; k>=1 ; k--)
            printf("%d\t", k);


        printf("\n");
    }
}
