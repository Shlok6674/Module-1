// Program to check if two integers are equal

#include <stdio.h>

main()
{
    
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
 
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) 
    {
        // If they are equal, print a message indicating so
        printf("The two integers are equal.\n");
    } 
    else 
    {
        // If they are not equal, print a message indicating so
        printf("The two integers are not equal.\n");
    }

    
}