#include <stdio.h>
int main()
{
	int i,j,N,a[100],temp;
	printf("Enter the number");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	printf("The elements are%d",a[i]);
	}
	for(i=1;i<=N;i++)
	{
		for(j=i+1;j<=N;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[i]=temp;
			}
			for(i=0;i<N;i++)
			{
				printf("Sorted order is%d",a[i]);
			}	
		}
	}
	return 0;
}
