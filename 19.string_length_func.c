#include <stdio.h>

int stringLen(char *s) {
    int i = 0;
    while (s[i] != '\0') ++i;
    return i;
}

int main() {
    char s[] = "Hello World";
    printf("Length of the string: %d\n", stringLen(s));  
    return 0;
}
