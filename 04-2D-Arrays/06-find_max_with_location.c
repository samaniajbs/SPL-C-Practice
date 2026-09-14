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

    int max = a[0][0];
    int max_row = 0, max_col = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("\nMax: %d", max);
    printf("\nLocation: [%d][%d]", max_row, max_col);
    return 0;
}
