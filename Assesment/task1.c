#include <stdio.h>

int main() {
    int choice, quantity, total = 0, amount;
    char more;
    
    // Menu prices
    int pizza = 180;
    int burger = 100;
    int dosa = 120;
    int idli = 50;
    
    printf("----- Menu -----\n");
    printf("1. Pizza\nprice = %d rs/pcs\n", pizza);
    printf("2. Burger\nprice = %d rs/pcs\n", burger);
    printf("3. Dosa\nprice = %d rs/pcs\n", dosa);
    printf("4. Idli\nprice = %d rs/pcs\n", idli);
    
    // Using for loop to continue taking orders until user says no
    for(;;) {  // Infinite loop, will break when user chooses 'n'
        printf("\nPlease Enter your choice... : ");
        scanf("%d", &choice);
        
        // Process order based on choice
        switch(choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity : ");
                scanf("%d", &quantity);
                amount = quantity * pizza;
                total += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", total);
                break;
                
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity : ");
                scanf("%d", &quantity);
                amount = quantity * burger;
                total += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", total);
                break;
                
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity : ");
                scanf("%d", &quantity);
                amount = quantity * dosa;
                total += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", total);
                break;
                
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity : ");
                scanf("%d", &quantity);
                amount = quantity * idli;
                total += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", total);
                break;
                
            default:
                printf("Invalid choice!\n");
                break;
        }
        
        // Ask if user wants to order more
        printf("Do you want to place more orders? y & n : ");
        scanf(" %c", &more);  // Space before %c to consume newline
        
        if(more == 'n' || more == 'N') {
            break;  // Exit the loop if user chooses no
        }
        
        // Display menu again if continuing
        printf("----- Menu -----\n");
        printf("1. Pizza\nprice = %d rs/pcs\n", pizza);
        printf("2. Burger\nprice = %d rs/pcs\n", burger);
        printf("3. Dosa\nprice = %d rs/pcs\n", dosa);
        printf("4. Idli\nprice = %d rs/pcs\n", idli);
    }
    
    // Display final bill
    printf("\nFinal Total Amount is = %d\n", total);
    
    return 0;
}