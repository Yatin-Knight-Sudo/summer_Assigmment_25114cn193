#include <stdio.h>
#include <math.h>
int main() {
    int num,s=0,t,k,c=0;
    printf("Enter the number ");
    scanf("%d", &num);
k=num;
while(k>0)
    {
        k=k/10;
        c++;
    }
    while(num>0)
    {
        t=num%10;
        s=s*10+t;
        num=num/10;
        c--;
    }
    printf("Reverse of number %d", s);

    return 0;
}