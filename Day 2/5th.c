#include <stdio.h>

int main(void)
{
    long long n;
    int digits = 0;

    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        digits = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n > 0) {
            n /= 10;
            digits++;
        }
    }

    printf("%d\n", digits);
    return 0;
}
