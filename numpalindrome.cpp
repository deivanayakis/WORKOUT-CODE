/*
 * FIND THE PALINDROME NUMBER WHICH IS GENERATED FROM SUM OF GIVEN N AND ITS REVERSE UNTIL IT DOES NOT GIVE PALINDROME NUMBER.
 */
#include<stdio.h>
int isPalin(int n)
{
   int s=0;
   while(n>0)
   {
      s=s*10+n%10;
      n=n/10;
   }
   return s;
}
int main()
{
   int n,s;
   printf("ENTER NUMBER :");
   scanf("%d",&n);
   s=n;
   while(n!=isPalin(s))
   {
     s=s+isPalin(s);
     n=s;
   }
   printf("Its Valid Palindrome = %d\n",s);
}
