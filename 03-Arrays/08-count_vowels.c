#include <stdio.h>
int main() {
    int n, i, vowel = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    char a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Array A: ");
        scanf(" %c", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U') vowel++;
    }
    printf("count: %d", vowel);
    return 0;
}
