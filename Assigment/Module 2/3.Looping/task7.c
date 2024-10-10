//number in reverse order
#include <stdio.h>

main() 
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers in reverse order from %d:\n", n);
    
    for(i = n; i >= 1; i--) 
    {
        printf("%d ", i);
    }

    printf("\n");

    
}
