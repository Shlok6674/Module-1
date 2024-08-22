#include <stdio.h>

int main() {
  int choice, quantity, total = 0;
  char more_orders;

  do {
    printf("1. Pizza\tprice = 180rs/pcs\n");
    printf("2. Burger\tprice = 100rs/pcs\n");
    printf("3. Dosa\tprice = 120rs/pcs\n");
    printf("4. Idli\tprice = 50rs/pcs\n");
    printf("Please Enter your choose... : ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("You have selected pizza.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity);
        total += 180 * quantity;
        break;
      case 2:
        printf("You have selected Burger.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity);
        total += 100 * quantity;
        break;
      case 3:
        printf("You have selected Dosa.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity);
        total += 120 * quantity;
        break;
      case 4:
        printf("You have selected Idli.\n");
        printf("Enter the quantity : ");
        scanf("%d", &quantity);
        total += 50 * quantity;
        break;
      default:
        printf("Invalid choice.\n");
    }

    printf("Total Amount is = %d\n", total);
    printf("Do you want place more orders? y & n : ");
    scanf(" %c", &more_orders);

  } while (more_orders == 'y');

  printf("Thank you for your order!\n");
  return 0;
}