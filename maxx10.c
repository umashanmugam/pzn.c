#include <stdio.h>
int main()
{
	int i,max,a[]={2,1,14,15,13,8,7,6,4,5};
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum no is %d",max);
	return 0;
}
