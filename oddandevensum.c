#include <stdio.h>

int main() {
    int n, i, even_sum = 0, odd_sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum += i; // Add to even sum
        } else {
            odd_sum += i;  // Add to odd sum
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}

