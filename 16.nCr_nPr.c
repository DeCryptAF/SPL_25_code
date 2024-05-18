#include <stdio.h>
#include <math.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}
int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}
long nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n = 5, r = 3;
     printf("%dC%d = %d\n",n,r,nCr(n, r));
     printf("%dP%d = %d\n",n,r,nPr(n, r));
    return 0;
}

//efficient method - ignore 
// long long nCr(int n, int r) {
//     if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
//     long long ans = 1;
//     int i;
//     for(i = 1; i <= r; i++) {
//         ans *= n - r + i;
//         ans /= i;
//     }
//     return ans;
// }
