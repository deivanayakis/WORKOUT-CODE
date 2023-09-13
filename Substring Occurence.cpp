/*
 * C PROGRAM TO FIND THE OCCURENCE OF THE GIVEN SUBSTRING
 * FROM THE GIVEN TEXT
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
      int i,j,count=0;
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
            count++;
      }
      printf("Given Substring %s occured in %d times\n",t,count);
      return 0;
}
