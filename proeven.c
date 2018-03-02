#include <stdio.h>
int main()
{
	int M,N,t;
	scanf("%d%d",&M,&N);
	t=M*N;
	if(t%2==0)
	{
		printf("Product is even");
	}
	else
	{
		printf("Product is odd");
	}
	return 0;
}
