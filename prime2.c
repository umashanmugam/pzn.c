#include<stdio.h>
int main()
{
    int n, i, j, min, max, flag=0;
    printf("\n Enter two Intervals: ");
    scanf("%d%d",&min,&max);
    printf("\n The prime numbers between %d and %d are :",min,max);
    for(i=min+1;i<max;i++)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++)     
       {
            if(i%j==0)
            {
                flag=1;
                break;
            }
       }
        if (flag==0)
        {
            printf(" %d ",i);
        }
    }
   return 0;
}
