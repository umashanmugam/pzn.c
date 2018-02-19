#include <stdio.h>
int main()
{
char s1[]="Nivi";
char s2[]="vinitha";
int n1,n2;
n1=strlen(s1);
n2=strlen(s2);
    if(n1>=n2)
     {
     	printf("%s",s1);
     }
     else
     {
     	printf("%s",s2);
     }
     return 0;
}
