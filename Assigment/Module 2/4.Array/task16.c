//Store 5 numbers in array and sort it in ascending order
#include <stdio.h>

sortArray(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

main() 
{
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    sortArray(numbers, 5);

    printf("Sorted numbers in ascending order:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
