#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array: ");
        scanf("%f", &a[i]);
    }
    for (i = 0; i < n; i++) sum += a[i];
    float avg = sum / n;
    printf("%.2f", avg);
    return 0;
}
