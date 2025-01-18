#include<stdio.h>

int main()
{
    int n; // Variable to store user's choice
    float a, b; // Variables to store the two numbers
    printf("-----------Menu----------");
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter the number1: ");
    scanf("%f", &a); // Get the first number

    printf("\nEnter the number2: ");
    scanf("%f", &b); // Get the second number

    printf("\nEnter the number[1,2,3,4]; ");
    scanf("%d", &n); // Get the user's choice

    switch (n)
    {
    case 1:
        printf("Addition = %.2f", a + b); // Perform addition
        break;
    case 2:
        printf("Subtraction = %.2f", a - b); // Perform subtraction
        break;
    case 3:
        printf("Multiplication = %.2f", a * b); // Perform multiplication
        break;
    case 4:
        if (b != 0)
            printf("Division = %.2f\n", a / b); // Perform division if b is not zero
        else
            printf("Error: Division by zero!\n"); // Handle division by zero error
        break;
    default:
        printf("Invalid choice!\n"); // Handle invalid choice
        break;
    }

    return 0; // End of program
}