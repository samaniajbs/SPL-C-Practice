#include <stdio.h>
int main() {
    int n, m, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    printf("Enter the value of m: ");
    scanf("%d", &m);
    int b[m];
    for (i = 0; i < m; i++) {
        printf("Enter Array B: ");
        scanf("%d", &b[i]);
    }
    int temp[100];
    for (i = 0; i < n; i++) temp[i] = a[i];
    for (i = 0; i < m; i++) a[i] = b[i];
    for (i = 0; i < n; i++) b[i] = temp[i];
    int tsize = n;
    n = m;
    m = tsize;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < m; i++) printf("%d ", b[i]);
    return 0;
}
