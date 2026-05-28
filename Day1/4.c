#include <stdio.h>
int main()
{
    int n,i,a=0;
    printf("enter a number");

    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        n=n/10;
       a++;
    }
 printf("number of digits in %d = %d\n",i,a);
    return 0;
}