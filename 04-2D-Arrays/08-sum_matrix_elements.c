#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[m][n];

    for (i = 0; i < m; i++) {
        printf("Enter array A: ");
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    int sum = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) sum += a[i][j];

    printf("\nsum: %d", sum);
    return 0;
}
