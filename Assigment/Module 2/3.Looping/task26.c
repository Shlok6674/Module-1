#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    // Prompt the user to input a number
    printf("Input any number: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            sum += j;
        }
    }

    // Display the sum
    printf("Sum = %d\n", sum);

    return 0;
}