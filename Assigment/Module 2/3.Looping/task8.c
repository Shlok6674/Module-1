//find out the max from given number
#include <stdio.h>

main() 
{
    int num, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        int digit = num % 10; // Get the last digit
        if (digit > maxDigit) 
        {
            maxDigit = digit; // Update maxDigit if current digit is greater
        }
        num = num / 10; // Remove the last digit
    }

    printf("The maximum digit is: %d\n", maxDigit);

   
}
