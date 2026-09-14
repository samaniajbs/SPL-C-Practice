#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n][n];

    for (i = 0; i < n; i++) {
        printf("Enter array: ");
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    printf("Major diagonal: ");
    for (i = 0; i < n; i++) printf("%d ", a[i][i]);

    printf("\nMinor diagonal: ");
    for (i = 0; i < n; i++) printf("%d ", a[i][n - 1 - i]);

    return 0;
}
