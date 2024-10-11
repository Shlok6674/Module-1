//Find out length of string without using inbuilt function
#include <stdio.h>

stringLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}

main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of the string is: %d\n", stringLength(str));

    
}
