//remove characters from a string except alphabets.
#include <stdio.h>
#include <string.h>

main() {
    char str[200], result[200];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing non-alphabet characters: %s\n", result);

    
}
