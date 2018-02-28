#include <stdio.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	b=(n&(n-1));
	if(b==0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
