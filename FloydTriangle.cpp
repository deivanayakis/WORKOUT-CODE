/*
 * C PROGRAM TO CONSTRUCT FLOYD TRIANGLE
 */
#include<stdio.h>
int main()
{
   int n,i,j,k=1;
   printf("Enter number of rows :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<(n-i)-1;j++)
      {
         printf(" ");
      }
      for(j=0;j<=i;j++)
      {
         printf("%d ",k++);
      }
      printf("\n");
   }
   return 0;
}
