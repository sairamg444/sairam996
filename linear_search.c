#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};  // Example array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int key = 50;
    int index = -1;  // Variable to store the index of the key if found

    // Linear search algorithm
    int i;
    for ( i = 0; i < size; i++) {
        if (numbers[i] == key) {
            index = i;
            break;
        }
    }

    // Printing the result
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

