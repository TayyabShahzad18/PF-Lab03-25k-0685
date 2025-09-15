#include <stdio.h>

int main() {
    float number;
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    printf("Number with 3 decimal places: %.3f\n", number);
    printf("Number with 6 decimal places: %.6f\n", number);
    return 0;
}
