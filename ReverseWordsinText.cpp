/*
 * C PROGRAM TO REVERSE THE WORDS IN THE GIVEN TEXT
 */
#include<stdio.h>
#include<string.h>
int main()
{
   char text[300],t;
   int i=0,j,m,n;
   scanf("%[^\n]",text);
   while(i<strlen(text))
   {
      j=0;
      while((i+j<strlen(text)) && ((text[i+j]>='a' && text[i+j]<='z') || (text[i+j]>='A' && text[i+j]<='Z')))
      {
         j++;
      }
      j--;
      n=i;
      m=i+j;
      while(i<m)
      {
         t=text[i];
         text[i]=text[m];
         text[m]=t;
         i++;
         m--;
      }
      i=n+j+2;
   }
   i=0;
   j=strlen(text)-1;
   while(i<j)
   {
      t=text[i];
      text[i]=text[j];
      text[j]=t;
      i++;
      j--;
   }
   printf("%s\n",text);
   return 0;
}
