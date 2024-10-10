//sum of 10 numbers using of while loop
#include <stdio.h>

main() 
{
    int sum = 0, num, count = 1;

    printf("Enter 10 numbers:\n");

    while (count <= 10) 
    {
        scanf("%d", &num);
        sum += num;
        count++;
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    
}
