//count the total number of vowels or consonants in a string
#include<stdio.h>
#include<string.h>

main() 
{
    char str[200];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) 
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    
}
