#include <stdio.h>

void main()
{
   int i, j, n, sum;

   printf("enter num = ");
   scanf(" %d", &n);

   printf("\n");

   for( i=1 ; i<=n ; i++)
   {
       sum = 0;
       for( j=1 ; j<=i ; j++)
       {
          sum = sum + j;
          printf("%d  ", j);
       } //for j
       printf("%d", sum);
       printf("\n");
   } //for i
}
