/*
 * C PROGRAM TO SPLIT THE GIVEN INTO K PARTITION AND FIND THE MAXIMUM AMONG THAT.
 */
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
   int n,i,j,k=0,m,max;
   printf("ENTER THE NUMBER OF ARRAY ELEMENTS : ");
   scanf("%d",&n);
   int *a=(int*)malloc(sizeof(int)*n);
   int res[n];
   printf("ENTER ARRAY ELEMENTS :\n");
   for (i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("ENTER THE NUMBER OF PARTITION : ");
   scanf("%d",&k);
   for (i=0;i<=n-k;i++)
   {
      max=INT_MIN;
      for (j=i;j<k+i;j++)
      {
         if (max<a[j])
            max=a[j];
      }
      res[m++]=max;
   }
   printf("TARGETTED ARRAY....\n");
   for (i=0;i<m;i++)
   {
      printf("%d\t",res[i]);
   }
   printf("\n");
   return 0;
}
