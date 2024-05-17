#include <stdio.h>

int main() {
    int arr[100], n, i;
    float sum = 0.0, average;
    int largest = 0, smallest = 1e9; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        largest = (arr[i] > largest) ? arr[i] : largest;
        smallest = (arr[i] < smallest) ? arr[i] : smallest;
        sum += arr[i];
    }
    average = sum / n;

    printf("Largest element in the array is: %d\n", largest);
    printf("Smallest element in the array is: %d\n", smallest);
    printf("Average of the elements in the array is: %.2f\n", average);

    return 0;
}
