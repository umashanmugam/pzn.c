#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the values a&b before swapping");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Enter the values a&b after swapping%d\t%d",a,b);
	return 0;
}
