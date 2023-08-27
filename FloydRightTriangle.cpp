/*
 * C PROGRAM TO CONSTRUCT FLOYD RIGHT TRIANGLE
 */
#include<stdio.h>
int main()
{
   int n,i,j,k=1;
   printf("Enter number of rows :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<=i;j++)
      {
         printf("%d ",k++);
      }
      printf("\n");
   }
   return 0;
}
