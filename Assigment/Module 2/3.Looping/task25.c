//WAP Program to print below output using for loop 
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20 
//.
//. 
//41 42 43 44 45 46 47 48 49 50
#include <stdio.h>

main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= 10; j++) 
        {
            printf("%02d ", (i - 1) * 10 + j);
        }
        printf("\n");
    }

    
}

