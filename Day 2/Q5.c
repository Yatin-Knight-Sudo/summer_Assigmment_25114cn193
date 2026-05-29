#include <stdio.h>
int main() {
    int num,s=0,t;
    printf("Enter the number ");
    scanf("%d", &num);

    while(num>0)
    {
        t=num%10;
        s=s+t;
        num=num/10;
    }
    printf("Sum of digits: %d", s);

    return 0;
}