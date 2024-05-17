#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int odd[size], even[size];
  int odd_size = 0, even_size = 0;
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0) even[even_size] = arr[i], even_size++;
    else odd[odd_size] = arr[i], odd_size++;
  }

  printf("Original array: ");
  for (int i = 0; i < size; i++) 
    printf("%d ", arr[i]);
  printf("\n");
  printf("Odd elements: ");
  for (int i = 0; i < odd_size; i++)
    printf("%d ", odd[i]);
  printf("\n");
  printf("Even elements: ");
  for (int i = 0; i < even_size; i++)
    printf("%d ", even[i]);
  printf("\n");

  return 0;
}
