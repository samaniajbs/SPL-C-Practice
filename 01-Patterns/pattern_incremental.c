#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter n: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        num = i;
        for (j = 0; j < i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
