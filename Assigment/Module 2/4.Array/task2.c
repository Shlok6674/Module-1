//Addition, Subtraction, Multiplication and Division using Switch #include <stdio.h>
#include <stdio.h>

add(int arr[]) 
{
    printf("Result of addition: %d\n", arr[0] + arr[1]);
}

subtract(int arr[]) 
{
    printf("Result of subtraction: %d\n", arr[0] - arr[1]);
}

multiply(int arr[]) 
{
    printf("Result of multiplication: %d\n", arr[0] * arr[1]);
}

divide(int arr[]) 
{
    if(arr[1] != 0) 
    {
        printf("Result of division: %.2f\n", (float)arr[0] / arr[1]);
    } 
    else 
    {
        printf("Division by zero is not allowed.\n");
    }
}

main() 
{
    int arr[2], choice;

    printf("Enter two numbers: ");
    for(int i = 0; i < 2; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            add(arr);
            break;
        case 2:
            subtract(arr);
            break;
        case 3:
            multiply(arr);
            break;
        case 4:
            divide(arr);
            break;
        default:
            printf("Invalid choice.\n");
    }

    
}
