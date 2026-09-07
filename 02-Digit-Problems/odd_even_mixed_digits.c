#include <stdio.h>

int main() {
    int n;
    int odd = 0;
    int even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int digit = n % 10;
    int max = digit;
    int min = digit;

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            if (digit > max) {
                max = digit;
            }
            odd = 1;
        } else {
            if (digit < min) {
                min = digit;
            }
            even = 1;
        }

        n = n / 10;
    }

    if (odd == 1 && even == 0) {
        printf("Max: %d\n", max);
    } else if (odd == 0 && even == 1) {
        printf("Min: %d\n", min);
    } else {
        printf("Mixed digits\n");
    }

    return 0;
}
