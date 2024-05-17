#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) 
        return 0;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1;
}

void fibonacci(int n, int fib[], int prime[]) {
    fib[0] = prime[0];
    fib[1] = prime[1];
    for (int i = 2; i < n; i++) 
        fib[i] = fib[i - 1] + fib[i - 2];
}

int main() {
    int arr[] = {4, 8, 13, 17, 20, 7, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int primes[size];
    int num_primes = 0;
  
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            primes[num_primes] = arr[i];
            num_primes++;
        }
    }
    int fibonacci_series[size];
    fibonacci(size, fibonacci_series, primes);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Prime numbers: ");
    for (int i = 0; i < num_primes; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    printf("Fibonacci series: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", fibonacci_series[i]);
    }
    printf("\n");

    return 0;
}
