//Program to Print the Multiplication Table of N
#include <stdio.h>

main() 
{
    int N;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    printf("Multiplication table for %d:\n", N);
    
    for(int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    
}
