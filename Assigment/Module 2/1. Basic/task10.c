// the area of a rectangular prism
#include <stdio.h>

main()
{
    float width, height, length, area;

    // Prompt the user to enter the width of the prism
    printf("Enter the width of the prism: ");
    // Read the width value from the user
    scanf("%f", &width);

    // Prompt the user to enter the height of the prism
    printf("Enter the height of the prism: ");
    // Read the height value from the user
    scanf("%f", &height);

    // Prompt the user to enter the length of the prism
    printf("Enter the length of the prism: ");
    // Read the length value from the user
    scanf("%f", &length);

    // Calculate the surface area of the prism
    area = 2 * (width * length + height * length + height * width);

    // Display the surface area of the prism
    printf("Surface area of the prism: %.2f square units\n", area);
}
