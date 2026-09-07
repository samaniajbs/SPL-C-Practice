#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    i = 1;

    while (i <= n) {
        for (j = 1; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
        i++;
    }

    return 0;
}
