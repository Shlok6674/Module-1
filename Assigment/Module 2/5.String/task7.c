//copy one string to another string.
#include <stdio.h>

main() 
{
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    int i;
    for(i = 0; source[i] != '\0'; i++) 
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';

    printf("Copied string: %s", destination);

   
}
