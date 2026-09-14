#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        sum += a[i];
        printf("%d", sum);
    }  
    return 0;
}
