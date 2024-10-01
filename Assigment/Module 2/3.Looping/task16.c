#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Prompt the user to input a number
    printf("Input any number: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for(i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the sum
    printf("Sum = %d\n", sum);

    return 0;
}