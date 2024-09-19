#include <stdio.h>

int main() {
    int years;
    printf("Enter number of years: ");
    scanf("%d", &years);

    int days = years * 365;

    printf("%d years is equivalent to:\n", years);
    printf("%d days\n", days);

    return 0;
}