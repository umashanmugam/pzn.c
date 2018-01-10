#include <stdio.h>
int main()
{
	int n;
	printf("Enter any integer");
	scanf("%d", &n);
	if(n<=0)
	{
		if(n==0)
		{
		printf("given no is zero");
		}
		else
		{ 
		printf("given no is -ve");
		}
	}
	else
	{
		printf("given no is +ve");
	}
	return 0;
	}
	
