#include <stdio.h>
int main()
{
int n,rem,sum;
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	if(rem%2!=0)
	{
		printf("%d\t",rem);
	}
}
	return 0;
}
