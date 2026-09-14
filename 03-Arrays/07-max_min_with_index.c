#include <stdio.h>
int main() {
    int n, i, maxx = 0, minx = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for (i = 0; i < n; i++) {
        if (max < a[i]) {
            maxx = i;
            max = a[i];
        }
        if (min > a[i]) {
            minx = i;
            min = a[i];
        }
    }
    printf("Max: %d, index: %d\n", max, maxx);
    printf("Min: %d, index: %d", min, minx);
    return 0;
}
