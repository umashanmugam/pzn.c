#include <stdio.h>
int main()
{
	int M,N,t;
	scanf("%d%d",&M,&N);
	t=M+N;
	if(t%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
