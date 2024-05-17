#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//prime number using Sieve Of Eratosthenes
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            printf("%d ",p);
}

int main()
{
    int n = 50;
    printf("Prime numbers in range 1 to %d \n", n);
    SieveOfEratosthenes(n);
    return 0;
}
