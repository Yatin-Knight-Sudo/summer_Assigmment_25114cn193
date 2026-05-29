#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("enter a number: ");
    if(scanf("%d",&n)!=1) return 0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c = c + i;
        }
    }
    if(n==c)
    {
        printf("perfect number = %d\n", n);
    }
    else
    {
        printf("not a perfect number\n");
    }
    return 0;
}