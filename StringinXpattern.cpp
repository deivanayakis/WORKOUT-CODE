#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%s",s);
	int i,j;
	for(i=0;i<strlen(s);i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			if(i==j)
				printf("%c",s[i]);
			else if(i==strlen(s)-j-1)
				printf("%c",s[j]);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;	
}
