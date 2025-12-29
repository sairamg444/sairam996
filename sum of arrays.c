#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};  // Example array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;  // Variable to store the sum of elements

    // Calculating the sum of the array elements
    int i;
    for (i = 0; i < size; i++) {
        sum += numbers[i];
    }

    // Printing the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

