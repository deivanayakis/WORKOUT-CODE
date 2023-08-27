/*
 * CHECK WHETHER THE GIVEN NUMBER IS AUTOMORPHIC OR NOT.
 * AUTOMORPHIC NUMBER - EG: 6 -> 6*6 -> 3"6"
 */
#include<stdio.h>
int main()
{
   int n,n1,count=0;
   printf("Enter a number :");
   scanf("%d",&n);
   int temp=n;
   while(n>0)
   {
      n=n/10;
      count++;
   }
   int flag=0;
   n=temp;
   n1=n*n;
   while(count--)
   {
      if(n%10!=n1%10)
      {
         flag=1;
         break;
      }
      n=n/10;
      n1=n1/10;
   }
   n=temp;
   if(flag==0)
      printf("%d is an Automorphic Number.\n",n);
   else
      printf("%d is not an Automorphic Number.\n",n);
   return 0;
}
