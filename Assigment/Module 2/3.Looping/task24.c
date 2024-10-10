//A
//AB
//ABC
//ABCD
//ABCDE
#include <stdio.h>

main() 
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        for(char letter = 'A'; letter < 'A' + i; letter++) 
        {
            printf("%c", letter);
        }
        printf("\n");
    }

    
}
