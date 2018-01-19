#include <stdio.h>
int main()
{
	char ch;
	printf("enter any char");
	scanf("%c", &ch);
	if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
	{
		printf("given char is alphabet");
	}
	else
	{
		printf("given char is not alphabet");
	}
	return 0;
}
