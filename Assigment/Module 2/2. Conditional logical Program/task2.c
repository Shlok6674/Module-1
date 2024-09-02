// Program to display the sign of an integer

#include <stdio.h>

main()
{
    
    int m;

    printf("Enter an integer: ");
    scanf("%d", &m);

    if (m > 0) 
    {
        // If m is greater than 0, print 1
        printf("The sign of %d is 1.\n", m);
    } 
    else if (m == 0) 
    {
        // If m is equal to 0, print 0
        printf("The sign of %d is 0.\n", m);
    } 
    else
    {
        // If m is less than 0, print -1
        printf("The sign of %d is -1.\n", m);
    }

   
}