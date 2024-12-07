//compare two strings without using string library

#include <stdio.h>

main() 
{
    char str1[100], str2[100]; 
    int i, areEqual = 1; 

   
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 

    
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) 
    {
        if(str1[i] != str2[i]) 
        { 
            areEqual = 0; 
            break; 
        }
    }

    
    if(areEqual) 
    {
        printf("The two strings are equal.\n");
    } 
    else 
    {
        printf("The two strings are not equal.\n");
    }

    
}
