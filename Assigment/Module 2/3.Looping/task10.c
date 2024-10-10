// you have to make a summation of first and last Digit
#include <stdio.h>

main() 
{
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) 
    {
        num = num / 10;
    }

    firstDigit = num;

    int sum = firstDigit + lastDigit;

    printf("The summation of the first and last digit is: %d\n", sum);

    
}
