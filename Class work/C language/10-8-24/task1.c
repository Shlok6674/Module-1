#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);

    int years = days / 365;
    int remaining_days = days % 365;
    int months = remaining_days / 30;
    remaining_days = remaining_days % 30;

    printf("%d days is equivalent to:\n", days);
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", remaining_days);

    return 0;
}