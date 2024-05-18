// // #include <stdio.h>
// // #define N 100
// // long long factorials[N+1];
// // void compute_factorials();

// // int main() {
// //     compute_factorials();
// //     int n; scanf("%d", &n);
// //     printf("The factorial of %d : %d", n, factorials[n]);
// //     return 0;
// // }

// // void compute_factorials()
// // {
// //     factorials[0] = 1;
// //     factorials[1] = 1;
// //     for(int i = 2; i <= N; i++)
// //         factorials[i] = i * factorials[i-1];
// // }

// #include<stdio.h>
// int main()
// {
//     int n;
//     int arr[n];
//     int even[n];
//     int odd[n];
//     int even_numbers=0; int odd_numbers=0;
//     printf("enter the size of a array");
//     scanf("%d",&n);
//     printf("enter the elements of a array \n");
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]%2==0)
//         {
//             even[even_numbers]=arr[i];
//             even_numbers++;
//         }
//         else
//         {
//             odd[odd_numbers]=arr[i];
//             odd_numbers++;
//         }
//     }
//   return 0;
// }

// #include <stdio.h> 

// void print_pattern(int n) { 
//     for (int i = 1; i <= n / 2; i++) { 
//         for (int j = i; j < n / 2 + 1; j++) { 
//             printf(" "); 
//         } 
//         for (int j = 1; j <= 2 * i - 1; j++) { 
//             if (j == 1 || j == 2 * i - 1) { 
//                 printf("*"); 
//             } else { 
//                 printf(" "); 
//             } 
//         } 
//         printf("\n"); 
//     } 
//     for (int i = 1; i <= n; i++) { 
//         if (i == 1 || i == n) { 
//             printf("*"); 
//         } else { 
//             printf(" "); 
//         } 
//     } 
//     printf("\n"); 
//     for (int i = n / 2; i >= 1; i--) { 
//         for (int j = n / 2 + 1; j > i; j--) { 
//             printf(" "); 
//         } 
//         for (int j = 1; j <= 2 * i - 1; j++) { 
//             if (j == 1 || j == 2 * i - 1) { 
//                 printf("*"); 
//             } else { 
//                 printf(" "); 
//             } 
//         } 
//         printf("\n"); 
//     } 
// } 

// int main() { 
//     int n = 5; 
//     print_pattern(n); 
//     return 0; 
// }

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
