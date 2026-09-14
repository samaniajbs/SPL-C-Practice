#include <stdio.h>
int main() {
    int n, i, f;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf("%d", &a[i]);
    }
    printf("Number to be found: ");
    scanf("%d", &f);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == f) {
            if (found == 0) {
                printf("Found at index: %d", i);
                found = 1;
            } else {
                printf(", %d", i);
            }
        }
    }
    if (found == 0) printf("Not found");
    return 0;
}
