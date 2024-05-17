#include <stdio.h>

int main() {
    int n = 5, t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    printf("%d %d ", t1, t2);
    int sum = t1 + t2;
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        sum += nextTerm;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\nSum: %d\n", sum);
    return 0;
}
