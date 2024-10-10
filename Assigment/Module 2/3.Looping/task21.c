//A
//BC
//DEF
//GHIJ
//KLMNO
#include <stdio.h>

main() 
{
    int n;
    char letter = 'A';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++) 
        {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }

    
}
