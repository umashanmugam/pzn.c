#include <stdio.h>
int main()
{
	int x,i;
	char c[10];
	for(i=0;c[i]!=0;i++)
	{
	scanf("%c",&c);
   }
	for(i=0;c[i]!=0;i++)
	{
	x=((c[i]=='a')||(c[i]=='e')||(c[i]=='i')||(c[i]=='o')||(c[i]=='u'));
	if(x==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
  }
	return 0;
}
