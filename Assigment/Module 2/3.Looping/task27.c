#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;
    for(int i = 1; i <= n; i++) {
        float term = (float)i / (i + 1);
        if(i % 2 == 0) {
            term = -term;
        }
        sum += term;
    }

    printf("The sum of the series is: %f\n", sum);
    return 0;
}