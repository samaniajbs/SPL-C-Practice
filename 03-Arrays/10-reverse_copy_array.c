#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    printf("Array A: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    int j = 0;
    printf("\nArray B: ");
    for (i = n - 1; i >= 0; i--) {
        b[j] = a[i];
        printf("%d ", b[j]);
        j++;
    }
    return 0;
}
