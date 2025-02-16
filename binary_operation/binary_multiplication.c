#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, base = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

int main() {
    int bin1, bin2;
    printf("Enter two binary numbers: ");
    scanf("%d %d", &bin1, &bin2);

    int num1 = binaryToDecimal(bin1);
    int num2 = binaryToDecimal(bin2);
    int product = num1 * num2;

    printf("Product: %d\n", decimalToBinary(product));
    return 0;
}

