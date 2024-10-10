//Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>

main() {
    int numbers[5], factorial, num;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 5; i++) 
    {
        num = numbers[i];
        factorial = 1;

        for(int j = 1; j <= num; j++) 
        {
            factorial *= j;
        }

        printf("Factorial of %d is %d\n", num, factorial);
    }

   
}
