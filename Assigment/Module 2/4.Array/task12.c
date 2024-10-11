//accept 5 numbers from user and display in reverse order using for loop and array
#include <stdio.h>

Reverse(int numbers[], int size) 
{
    for (int i = size - 1; i >= 0; i--) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

main() 
{
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    printf("Numbers in reverse order: ");
    Reverse(numbers, 5);

   
}

