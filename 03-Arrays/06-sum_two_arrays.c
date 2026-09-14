#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        printf("Enter Array B: ");
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
    return 0;
}
