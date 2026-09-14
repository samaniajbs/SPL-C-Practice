#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[m][n], b[m][n], c[m][n];

    for (i = 0; i < m; i++) {
        printf("Enter array A: ");
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    for (i = 0; i < m; i++) {
        printf("Enter array B: ");
        for (j = 0; j < n; j++) scanf("%d", &b[i][j]);
    }

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) c[i][j] = a[i][j] + b[i][j];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
