#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array: ");
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--) printf("%d ", a[i]);
    return 0;
}
