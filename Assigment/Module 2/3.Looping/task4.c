//print table up to given numbers
#include <stdio.h>

main() 
{
    int num, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    for(i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    
}
