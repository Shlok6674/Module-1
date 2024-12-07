//extract a substring from a given string
#include <stdio.h>
#include <string.h>

main() {
    char str[200], substring[100];
    int start, length, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the starting position: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    for(i = 0; i < length; i++) {
        substring[i] = str[start + i];
    }
    substring[i] = '\0';

    printf("Extracted substring: %s\n", substring);

    
}
