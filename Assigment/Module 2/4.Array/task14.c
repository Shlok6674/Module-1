//accept 5 numbers from user and check entered number is even or odd using of array
#include <stdio.h>

checkEvenOdd(int numbers[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            printf("%d is even.\n", numbers[i]);
        } 
        else 
        {
            printf("%d is odd.\n", numbers[i]);
        }
    }
}

int main() 
{
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    checkEvenOdd(numbers, 5);

    
}
