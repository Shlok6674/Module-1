//Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>

main() {
    int num, originalNum, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    for (int i = 0; i < digits; i++) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    
}
