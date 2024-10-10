//1 2 3 6 9 18 27 54...
#include <stdio.h>

main() 
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int num = 1;
    for(int i = 1; i <= n; i++) 
    {
        printf("%d ", num);
        if (i < 3) {
            num *= 2; 
        } 
        else 
        {
            num *= 3; 
        }
    }

    printf("\n");
    
}
