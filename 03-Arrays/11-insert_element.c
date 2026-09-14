#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n + 1];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    int num, inx;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &inx);
    for (i = n; i >= inx; i--) a[i] = a[i - 1];
    a[inx] = num;
    n++;
    printf("Updated array:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
