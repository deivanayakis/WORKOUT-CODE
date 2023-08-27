/*
 * C PROGRAM TO CONSTRUCT HOLLOW DIAMOND
 */
#include<stdio.h>
int main()
{
   int n,i,j;
   printf("Enter number of rows :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         printf("  ");
      }
      for(j=0;j<2*i+1;j++)
      {
         if(j==0 || j==2*i)
            printf("* ");
         else
            printf("  ");
      }
      printf("\n");
   }
   for(i=n-1;i>0;i--)
   {
      for(j=0;j<n-i;j++)
      {
         printf("  ");
      }
      for(j=0;j<2*i-1;j++)
      {
         if(j==0 || j==2*i-2)
            printf("* ");
         else
            printf("  ");
      }
      printf("\n");
   }
   return 0;
}
