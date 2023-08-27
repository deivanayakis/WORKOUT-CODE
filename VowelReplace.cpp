/*
 * C PROGRAM TO REVERSE THE VOWEL IN THE STRING
 * EG:
 * I/P: PRACTICE , O/P: PRECTICA
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   printf("Enter the length of the string : ");
   scanf("%d",&n);
   char *s=(char*)malloc(n*sizeof(char));
   printf("Enter the string  : ");
   scanf("%s",s);
   int i=0,j=n-1;
   char temp;
   while(i<=j)
   {
       if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')&&(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'))
       {
          temp=s[i];
          s[i]=s[j];
          s[j]=temp;
          i++;
          j--;
       }
       else if(!(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
       {
          i++;
       }
       else if(!(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'))
       {
          j--;
       }
   }
   printf("Targeted String : %s\n",s);
   return 0;
}
