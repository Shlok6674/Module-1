//take two Array input from user and sort them in ascending ordescending order as per user’s choice
#include <stdio.h>

sortArray(int arr[], int n, int order) 
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (order == 1 && arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
            else if (order == 2 && arr[i] < arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

main() 
{
    int arr1[5], arr2[5], choice;

    printf("Enter 5 elements for the first array:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 elements for the second array:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    sortArray(arr1, 5, choice);
    sortArray(arr2, 5, choice);

    printf("Sorted first array:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr1[i]);
    }

    printf("\nSorted second array:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    
}
