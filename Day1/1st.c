#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    sum = a + b;
    printf("Sum = %d\n", sum);

    return 0;
}
