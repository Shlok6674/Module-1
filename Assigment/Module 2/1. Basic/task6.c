#include <stdio.h>

main()
{
    float base, height, area; // Variables to store the base, height, and area of the triangle

    printf("Enter the base of the triangle: ");
    scanf("%f", &base); // Get the base from the user

    printf("Enter the height of the triangle: ");
    scanf("%f", &height); // Get the height from the user

    area = 0.5 * base * height; // Calculate the area of the triangle

    printf("Area of the triangle: %.2f square units\n", area); // Display the area of the triangle
}
