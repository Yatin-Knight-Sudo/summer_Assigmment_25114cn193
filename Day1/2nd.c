#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    if (scanf("%d", &n) != 1)
        return 0;

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d\n", sum);
    return 0;
}
