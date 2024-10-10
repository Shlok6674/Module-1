//find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>

main() {
    char str[200];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("The total number of characters is: %d\n", length - 1);


}
