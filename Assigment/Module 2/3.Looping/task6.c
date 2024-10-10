//Fibonacci series up to given numbers
#include <stdio.h>

main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    
    for(int i = 1; i <= n; i++) 
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    
}
