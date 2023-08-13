/*
 * PATTERN PRINTING
 *       0
 *     3 0 3
 *   2 3 0 3 2
 * 1 2 3 0 3 2 1
 */
#include<stdio.h>
int main()
{
   int n,i,j,k;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   for(i=n;i>=0;i--)
   {
      for(j=0;j<2*i;j++)
         printf(" ");
      if(i==n)
      {
         printf("0");
      }
      else
      {
         k=i+1;
         int l=2*(n-i)+1;
         for(j=0;j<l;j++)
         {
            printf("%d ",k);
            if(k%n==0 && k!=0 && j<=l/2)
            {
               k=0;
            }
            else if(k==0)
            {
               k=n;
            }
            else if(j>l/2)
            {
               k--;
            }
            else
            {
               k++;
            }
        }
      }
      printf("\n");
   }
   return 0;
}

