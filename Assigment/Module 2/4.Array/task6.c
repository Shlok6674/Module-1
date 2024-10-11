//make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>

add(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

subtract(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

multiply(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

main() 
{
    int a[3][3], b[3][3], result[3][3];
    int choice;

    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        add(a, b, result);
        printf("Result of addition:\n");
    } 
    else if (choice == 2) 
    {
        subtract(a, b, result);
        printf("Result of subtraction:\n");
    } 
    else if (choice == 3) 
    {
        multiply(a, b, result);
        printf("Result of multiplication:\n");
    } 
    else 
    {
        printf("Invalid choice.\n");
        return 0;
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    
}
