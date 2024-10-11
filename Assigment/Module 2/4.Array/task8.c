//reverse a string and check that the string is palindrome or not
#include <stdio.h>

reverseString(char str[], char rev[], int length) 
{
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';
}

Palindrome(char str[], char rev[], int length) 
{
    for (int i = 0; i < length; i++) 
    {
        if (str[i] != rev[i]) 
        {
        }
    }
    return 1;
}

stringLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

main() 
{
    char str[100], rev[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = stringLength(str);
    reverseString(str, rev, length);

    printf("Reversed string: %s\n", rev);

    if (Palindrome(str, rev, length)) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    
}
