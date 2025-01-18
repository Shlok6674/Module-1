// program to make Simple calculator
#include <stdio.h>

main()
{
    int num1, num2; // Variables to store the operands
    char operator; // Variable to store the operator

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Get the operator from the user

    printf("Enter the first operand: ");
    scanf("%d", &num1); // Get the first operand

    printf("Enter the second operand: ");
    scanf("%d", &num2); // Get the second operand

    if (operator == '+')
        printf("%d + %d = %d\n", num1, num2, num1 + num2); // Perform addition
    else if (operator == '-')
        printf("%d - %d = %d\n", num1, num2, num1 - num2); // Perform subtraction
    else if (operator == '*')
        printf("%d * %d = %d\n", num1, num2, num1 * num2); // Perform multiplication
    else if (operator == '/')
        if (num2 != 0)
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2); // Perform division if num2 is not zero
        else
            printf("Error: Division by zero is not allowed.\n"); // Handle division by zero error
    else if (operator == '%')
        if (num2 != 0)
            printf("%d %% %d = %d\n", num1, num2, num1 % num2); // Perform modulus operation if num2 is not zero
        else
            printf("Error: Division by zero is not allowed.\n"); // Handle division by zero error
    else
        printf("Error: Invalid operator.\n"); // Handle invalid operator
}
