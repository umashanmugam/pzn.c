#include <stdio.h>
main()
{
	int N,i,a[100],max;
	printf("Enter the number");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	printf("Enter the integers");
	scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<N;i++)
	{
	   if(a[i]>max)
	     {
	     	max=a[i];
	     }
	     printf("Maximum element is%d",max);
	}
	return 0;
}
	
