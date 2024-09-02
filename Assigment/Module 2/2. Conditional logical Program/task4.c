//conditional calculatop

#include <stdio.h>

main() 
{
    int num1, num2, choice;
    printf("Simple Calculator Program\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    if(choice >= 1 && choice <= 5) 
    {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        
        switch(choice) 
        {
            case 1:
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                if(num2 != 0)
                    printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case 5:
                if(num2 != 0)
                    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
        }
    } 
    else 
    {
        printf("Invalid choice. Please choose a number between 1 and 5.\n");
    }
    
}