//make a summation of given number
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        sum += num % 10; 
        num = num / 10;  
    }

    printf("The summation of the digits is: %d\n", sum);

    return 0;
}
