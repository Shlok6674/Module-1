//5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>

main() 
{
    int numbers[5], evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 5; i++) 
    {
        if(numbers[i] % 2 == 0) 
        
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);


}
