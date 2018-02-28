#include <stdio.h>
int main()
{
	int i,count=0;
	char a[100]="hello world";
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count+1);
	return 0;
}
