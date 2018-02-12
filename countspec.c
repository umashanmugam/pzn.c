#include <stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char a[30];
	scanf("%s",&a);
	for(i=0;a[i];i++)
	{
		if(spunct(a[i])
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
