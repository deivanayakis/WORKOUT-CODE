#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(j<=i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
