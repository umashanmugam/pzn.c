#include <stdio.h>
main()
{
	int N,i,a[100],min;
	printf("Enter the number");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	printf("Enter the integers");
	scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<N;i++)
	{
	   if(a[i]<min)
	     {
	     	min=a[i];
	     }
	     printf("Minimum element is%d",min);
	}
	return 0;
}
	
