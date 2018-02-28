#include <stdio.h>
int main()
{
	int i,N,t1=0,t2=1,T;
	printf("Enter the elements");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("\n%d",t1);
		T=t1+t2;
		t1=t2;
		t2=T;
	}
	return 0;
}
