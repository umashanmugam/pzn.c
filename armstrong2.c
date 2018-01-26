#include <stdio.h>
int main()
{
    int f,l,i,temp1,temp2,rem,n = 0,result = 0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &f, &l);
    printf("Armstrong numbers between %d and %d are: ",f,l);
    for(i=f+1; i<l;i++)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i)  
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
    return 0;
}
