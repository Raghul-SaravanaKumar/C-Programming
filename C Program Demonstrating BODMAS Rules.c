#include <stdio.h>
#include <math.h> // Required for handling "Orders" (Exponents/Powers)

int main() {
    // Problem Expression: 5 + (12 - 2) * 2^3 / 4
    // According to BODMAS:
    // 1. Bracket:    (12 - 2) = 10
    // 2. Order/Pow:  2^3 = 8
    // 3. Multiply/Divide (Left to right): 10 * 8 = 80 -> 80 / 4 = 20
    // 4. Addition:   5 + 20 = 25

    double result;
    
    // Writing the expression natively in C
    result = 5 + (12 - 2) * pow(2, 3) / 4;

    printf("Mathematical Expression: 5 + (12 - 2) * 2^3 / 4\n");
    printf("Calculated Result in C: %.2f\n", result);

    return 0;
}
