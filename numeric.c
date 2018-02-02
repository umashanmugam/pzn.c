#include <stdio.h>
int main()
{
	char n;
	printf("enter the number");
	scanf("%d",&n);
	if(n>=48&&n<=57)
	{
		printf("numeric");
	}
	else
	{
		printf("Not numeric");
	}
	return 0;
}
