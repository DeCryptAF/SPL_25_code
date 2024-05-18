#include <stdio.h>
#include <math.h>

int DecToOctal(int decimalNumber);
long long OctalToDec(int octalNumber);

int main() {

    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    int result = DecToOctal(decimalNumber);
    printf("%d in decimal = %d in octal\n", decimalNumber, result);
    printf("%d in octal = %d in decimal\n", result, OctalToDec(result));
    return 0;
}

int DecToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

long long OctalToDec(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}
