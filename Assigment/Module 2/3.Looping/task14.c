//Factorial of a Given Number using while loop
#include <stdio.h>

main()
{
    int num, factorial = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) 
    {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %d\n", num, factorial);

    
}