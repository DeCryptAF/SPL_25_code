#include <stdio.h>

int main() {
    int arr[100], n, i;
    int odd = 0, even = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2) odd++;
        else even++;
    }
    printf("ODD number count - %d\n", odd);
    printf("EVEN number count - %d\n", even);
    return 0;
}
