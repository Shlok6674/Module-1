//take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers
#include <stdio.h>

main() 
{
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int sumEven = 0, sumOdd = 0;

    printf("Enter 10 numbers:\n");

    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 10; i++) 
    {
        if(numbers[i] % 2 == 0) 
        {
            evenCount++;
            sumEven += numbers[i];
        } 
        else 
        {
            oddCount++;
            sumOdd += numbers[i];
        }
    }

    printf("Total Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);
    printf("Sum of Even Numbers: %d\n", sumEven);
    printf("Sum of Odd Numbers: %d\n", sumOdd);

    
}
