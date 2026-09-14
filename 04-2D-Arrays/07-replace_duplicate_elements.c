#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    int i, j, k, l;

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) scanf("%d", &arr[i][j]);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < m; k++) {
                for (l = 0; l < n; l++) {
                    if ((i != k || j != l) && arr[i][j] == arr[k][l]) {
                        arr[k][l] = -1;
                    }
                }
            }
        }
    }

    printf("Result:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
