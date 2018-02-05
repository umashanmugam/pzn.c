#include<stdio.h>
int main()
{
	int hour,minute,n;
	printf("Enter the number");
	scanf("%d",&n);
	hour=n/60;
	minute=n%60;
	printf("%d\t%d",hour,minute);
	return 0;
}
