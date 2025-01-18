// Area of Cube
#include<stdio.h>

main()
{
    float side, area; // Variables to store the side length and area of the cube

    printf("Enter the length::");
    scanf("%f", &side); // Get the side length from the user

    area = 6 * side * side; // Calculate the surface area of the cube
    printf("Area of Cube is::%.2f", area); // Display the surface area of the cube
}
