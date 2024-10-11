//find reverse of string using recursion
#include <stdio.h>

reverseString(char str[], int index, int length) 
{
    if (index < length) 
    {
        reverseString(str, index + 1, length);
        printf("%c", str[index]);
    }
}

main() 
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') 
    {
        length++;
    }

    printf("Reversed string: ");
    reverseString(str, 0, length);
    printf("\n");

    
}
