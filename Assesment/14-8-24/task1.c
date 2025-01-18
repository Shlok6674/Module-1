#include <stdio.h>

int main() {
  int choice, quantity, total = 0; // Declare variables for choice, quantity, and total amount
  char more_orders; // Variable to check if the user wants to place more orders

  do {
    // Display menu options
    printf("1. Pizza\tprice = 180rs/pcs\n");
    printf("2. Burger\tprice = 100rs/pcs\n");
    printf("3. Dosa\tprice = 120rs/pcs\n");
    printf("4. Idli\tprice = 50rs/pcs\n");
    printf("Please Enter your choose... : ");
    scanf("%d", &choice); // Get user's choice

    switch (choice) {
      case 1:
        printf("You have selected pizza.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity); // Get quantity for pizza
        total += 180 * quantity; // Calculate total for pizza
        break;
      case 2:
        printf("You have selected Burger.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity); // Get quantity for burger
        total += 100 * quantity; // Calculate total for burger
        break;
      case 3:
        printf("You have selected Dosa.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity); // Get quantity for dosa
        total += 120 * quantity; // Calculate total for dosa
        break;
      case 4:
        printf("You have selected Idli.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity); // Get quantity for idli
        total += 50 * quantity; // Calculate total for idli
        break;
      default:
        printf("Invalid choice.\n"); // Handle invalid choice
    }

    printf("Total Amount is = %d\n", total); // Display total amount
    printf("Do you want place more orders? y & n : ");
    scanf(" %c", &more_orders); // Check if the user wants to place more orders

  } while (more_orders == 'y'); // Repeat if the user wants to place more orders

  printf("Thank you for your order!\n"); // Thank the user
  return 0; // End of program
}