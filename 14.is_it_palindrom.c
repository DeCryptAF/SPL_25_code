#include <stdio.h> 

int main() 
{ 
	int number = 12321; 
	int reversed = 0; 
	int temporary_num = number; 

	while (temporary_num != 0) { 
		int r = temporary_num % 10; 
		reversed = reversed * 10 + r; 
		temporary_num /= 10; 
	} 
	if (number == reversed)
        printf(" Given number %d is a palindrome number", number); 
	else 
		printf(" Given number %d is not a palindrome number", number); 
	return 0; 
}
