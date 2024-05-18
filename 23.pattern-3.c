#include <stdio.h>

int main() {
    int n = 3;
    for(int i = 1; i <=n; i++) {
        for(int space = 1; space <= (n - i); space++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
            if (j > 1 && j <= i) printf("*");
        }
        printf("\n");
    }
    return 0;
}
