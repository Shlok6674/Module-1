// Find circumference of Triangle
#include <stdio.h>

main()
{
    float a, b, c, circumference; // Variables to store the lengths of the sides and the circumference

    printf("Enter the length of side a: ");
    scanf("%f", &a); // Get the length of side a from the user

    printf("Enter the length of side b: ");
    scanf("%f", &b); // Get the length of side b from the user

    printf("Enter the length of side c: ");
    scanf("%f", &c); // Get the length of side c from the user

    circumference = a + b + c; // Calculate the circumference of the triangle

    printf("Circumference of the triangle: %.2f units\n", circumference); // Display the circumference of the triangle
}
