#include <stdio.h>
#include <math.h>

int NumberOfDigits(int number) {
    int counter = 0;
    while(number != 0)
    {
        counter++;
        number = number/10;
    }
    return counter;
}

int main() {
    int number = 153;
    int digitsCount = NumberOfDigits(number);
    int sum = 0, old_number = number; 
    while(number != 0) {
        sum += pow(number%10,digitsCount); 
        number = number/10;
    }
    if(sum == old_number)
        printf("%d is an armstrong number",old_number);
    else
        printf("%d is not an armstrong number",old_number);
    return 0;
}
