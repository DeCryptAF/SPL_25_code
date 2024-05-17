#include <stdio.h>
#include <string.h>
int main() {
   char str1[] = "hello", str2[] = "hello";
   if (strcmp(str1, str2) == 0) {
       printf("The strings are equal.\n");
   } else {
       printf("The strings are not equal.\n");
   }
   return 0;
}
