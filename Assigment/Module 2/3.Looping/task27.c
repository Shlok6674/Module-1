//1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

main() 
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is %d\n", n, sum);

    
}
