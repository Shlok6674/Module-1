#include <stdio.h>

main()
{
    float length, width, area; // Variables to store the length, width, and area of the rectangle

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length); // Get the length from the user

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width); // Get the width from the user

    area = length * width; // Calculate the area of the rectangle

    printf("Area of the rectangle: %.2f square units\n", area); // Display the area of the rectangle
}
