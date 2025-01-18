// Find circumference of Rectangle
#include <stdio.h>

main() 
{
    float length, width, circumference; // Variables to store the length, width, and circumference of the rectangle

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length); // Get the length from the user

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width); // Get the width from the user

    circumference = 2 * (length + width); // Calculate the circumference of the rectangle

    printf("Circumference of the rectangle: %.2f units\n", circumference); // Display the circumference of the rectangle
}
