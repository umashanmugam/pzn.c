#include <stdio.h>
int main()
{
	int i,j,n,t,a[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		
		}
	}
	printf("Low is %d",a[0]);
	printf("\nHigh is %d",a[n-1]);

	return 0;
}
