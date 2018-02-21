#include <stdio.h>
int main()
{
	int i,N=5,sum=0,avg;
	for(i=1;i<=N;i++)
	{
		sum=sum+i;
	}
            avg=sum/N;
	printf("%d",avg);
	return 0;
}
