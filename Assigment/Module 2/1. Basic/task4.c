// Find Area of Square
#include<stdio.h>

main()
{
    float side, area; // Variables to store the side length and area of the square

    printf("Enter the length::");
    scanf("%f", &side); // Get the side length from the user

    area = side * side; // Calculate the area of the square
    printf("Area of Square is::%.2f", area); // Display the area of the square
}
