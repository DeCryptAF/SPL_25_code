#include <stdio.h>
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
int main() {
   int a,b;
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   printf("GCD between %d and %d is %d\n", a , b, gcd(a,b));
   printf("LCM between %d and %d is %d\n", a , b, lcm(a,b));
   return 0;
}
