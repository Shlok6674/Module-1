//separate individual characters from a string.
#include <stdio.h>

main() 
{
    char str[100];  

    
    printf("Enter a string: ");
    scanf("%s", str);  

    
    printf("The individual characters in the string are:\n");
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);  
    }

    
}
