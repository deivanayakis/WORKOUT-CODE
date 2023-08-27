/*
 * C PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS HARSHAD OR NOT.
 * HARSHAD NUMBER - NUMBER IS DIVISIBLE BY ITS SUM OF NUMBER.
 */
#include<stdio.h>
int main()
{
   int n,i,s=0;
   printf("Enter a number : ");
   scanf("%d",&n);
   int temp=n;
   while(n>0)
   {
      s+=(n%10);
      n=n/10;
   }
   n=temp;
   if(n%s==0)
   {
      printf("%d is a Harshad Number.\n",n);
   }
   else
   {
      printf("%d is not a Harshad Number.\n",n);
   }
   return 0;
}
