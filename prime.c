#include <stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;1<=n/2;i++)
	{
		if(n%i==0)
		{
		count++;
		break;
		}
	}
	if(count==0&&n!=1)
	{
	printf("%d is a prime no",n);
	}
	else
	{
		printf("%d is not a prime no",n);
	}
	return 0;
}
