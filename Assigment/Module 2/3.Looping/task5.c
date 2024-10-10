//print factorial of given number
#include <stdio.h>

main() 
{
    int num, factorial = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) 
    {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);

    
}
