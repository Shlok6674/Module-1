//perform Palindrome number using for loop and function
#include <stdio.h>

Palindrome(int num) 
{
    int original = num, reversed = 0;

    while (num != 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (Palindrome(number)) 
    {
        printf("%d is a palindrome.\n", number);
    } 
    else 
    {
        printf("%d is not a palindrome.\n", number);
    }
}