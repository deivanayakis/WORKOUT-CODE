/*
 * C PROGRAM TO CONSTRUCT PASCAL TRIANGLE
 */
#include<stdio.h>
int main()
{
   int i,j,n,a;
   printf("Enter number of rows :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=i;j<n;j++)
      {
         printf(" ");
      }
      a=1;
      for(j=1;j<=i;j++)
      {
         printf("%d ",a);
         a=a*(i-j)/j;
      }
      printf("\n");
   }
   return 0;
}
