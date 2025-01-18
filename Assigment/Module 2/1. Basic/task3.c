#include <stdio.h>

main() 
{
    float pi = 3.14; // Define the value of pi
    double radius, area, circumference; // Variables to store radius, area, and circumference

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius); // Get the radius from the user

    area = pi * radius * radius; // Calculate the area of the circle
    circumference = 2 * pi * radius; // Calculate the circumference of the circle

    printf("Area of the circle: %.2lf\n", area); // Display the area of the circle
    printf("Circumference of the circle: %.2lf\n", circumference); // Display the circumference of the circle

    return 0; // End of program
}

