/*
 * PROGRAM TO CHECK THE BALANCING {,[,(,),],} WHETHER IT IS VALID OR NOT
 */
#include<stdio.h>
#include<string.h>
int main()
{
   int i,j=0,l;
   char str[100],temp[100];
   printf("ENTER STRING :");
   scanf("%s",str);
   l=strlen(str);
   int flag=0;
   for(i=0;i<l;i++)
   {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
           temp[j]=str[i];
           j++;
        }
        else
        {
           if((temp[j-1]=='[' && str[i]==']') || (temp[j-1]=='(' && str[i]==')') || (temp[j-1]=='{' && str[i]=='}') )
           {
              temp[j-1]='\0';
              j--;
           }
           else
           {
           	    flag=1;
           		break;
		   }
        }
   }
   if(strlen(temp)==0 && flag==0)
      printf("VALID\n");
   else
      printf("INVALID\n");
   return 0;
}

