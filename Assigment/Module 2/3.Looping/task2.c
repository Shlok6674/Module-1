//accept 5 numbers from user and display all numbers
#include <stdio.h>

main() {
    int numbers[5];  

    // Loop to take 5 numbers as input from the user
    for(int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);  
    }

    // Loop to display the entered numbers
    printf("\nThe numbers you entered are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);  
    }

   
}
