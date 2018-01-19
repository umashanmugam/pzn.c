#include <stdio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d", &year);
	if((year%4==0)||(year%400==0))
	{
		printf("given year is leap");
	}
	else
	{
		printf("given year is not leap");
	}
  return 0;
}
