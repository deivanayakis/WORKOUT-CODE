/*
 * C PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS ABUNDANT NUMBER OR NOT.
 * ABUNDANT NUMBER - SUM OF ITS PROPER DIVISORS > NUMBER
 */
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter a number :");
   scanf("%d",&n);
   int s=0;
   for(i=1;i<n;i++)
   {
      if(n%i==0)
      {
         s+=i;
      }
   }
   if(s>n)
   {
      printf("%d is an Abundant Number.\n",n);
   }
   else
   {
      printf("%d is not an Abundant Number.\n",n);
   }
   return 0;

