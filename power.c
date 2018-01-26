#include <stdio.h>
int main()
{
	int n,k,i,sum=1;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the power");
	scanf("%d",&k);
	if((k==0)||(n==1))
	{
		printf("power is 1");
	}
	if(k==1)
	{
		printf("power is %d",n);
	}
	else
	{
		for(i=2;i<=k;i++)
		{
			sum=sum*n;
		}
		printf("power is %d", sum);
	}
	return 0;
}

