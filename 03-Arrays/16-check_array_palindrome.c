#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    int temp[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) temp[i] = arr[n - 1 - i];

    int is_palindrome = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] != temp[i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) printf("Same\n");
    else printf("Not same\n");

    return 0;
}
