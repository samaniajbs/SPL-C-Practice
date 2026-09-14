#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    int inx;
    printf("Enter position: ");
    scanf("%d", &inx);
    for (i = 0; i < n; i++) {
        if (i == inx) {
            for (j = i; j < n - 1; j++) a[j] = a[j + 1];
            n--;
        }
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
