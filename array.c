#include <stdio.h>
int main()
{
	int a[100],i,j,k,n,s=1;
	printf("\nEnter the no of element in an array");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the no of elements to be addea");
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		s=s+a[j];
	}
	printf("\nThe sum is%d",s);
	return 0;
}
