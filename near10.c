#include <stdio.h>
int main()
{
	int i,n,x;
	scanf("%d",&n);
	if(n%10!=0)
	{
	x=n+(10-n%10);
	printf("%d",x);
	}
	return 0;
}
