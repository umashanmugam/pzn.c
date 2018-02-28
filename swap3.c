#include <stdio.h>
int main()
{
	int a=5,b=10;
	printf("Enter the values a&b before swapping %d\t%d",a,b);
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nEnter the values a&b after swapping%d\t%d",a,b);
	return 0;
}
