//find out the max number from given array using function
#include <stdio.h>

findMax(int arr[], int n) 
{
    int max = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maxNumber = findMax(arr, n);
    printf("The maximum number is: %d\n", maxNumber);

    
}
