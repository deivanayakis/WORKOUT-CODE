/*
 * C PROGRAM TO FIND THE INDEX OF THE SUBSTRING
 *  IN THE GIVEN TEXT
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int i,j;
   char s[300];
   char t[30];
   printf("Specify the Given Text : ");
   scanf("%[^\n]",s);
   printf("Specify the SubString to Search : ");
   scanf("%s",t);
   for (i=0;s[i]!='\0';i++)
   {
      j=0;
      while (j<strlen(t) && t[j]==s[i+j])
      {
         j++;
      }
      if (j==strlen(t))
         printf("%d\n",i);
   }
   return 0;
}
