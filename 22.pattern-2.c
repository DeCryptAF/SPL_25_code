//         *
//      *     *
//    *         *
//      *     *
//         *

#include <stdio.h>

int main() {
    int n = 5;
    for(int i = 1; i <=n/2+1; i++) {
        for(int space = 1; space <= (n - i); space++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                printf(" * ");
            } else printf("  ");
        }
        printf("\n");
    }

    for(int i = n/2; i > 0; i--) {
        for(int space = 1; space <= (n - i); space++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                printf(" * ");
            } else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
