#include <stdio.h>


double power(double base, int exponent) {
    double result = 1.0;

   
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    
    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    
    double result = power(base, exponent);
    printf("%lf to the power of %d = %lf\n", base, exponent, result);

}
