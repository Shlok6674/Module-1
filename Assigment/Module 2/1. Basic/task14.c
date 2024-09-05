//.Find number of given ascii value
#include <stdio.h>

main() 
{
    int ascii;

    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);

    printf("Character represented by ASCII value %d is: %c\n", ascii, ascii);

}
