Binary to Decimal Conversion

#include <stdio.h>

int main() {
    int n, digit;
    int decimal = 0;
    int power = 1; // 2^0 initially

    scanf("%d", &n);

    for(; n != 0; n = n / 10) {
        digit = n % 10; // get last digit
        decimal = decimal + digit * power;
        power = power * 2; // increase power (2^1,2^2,2^3...)
    }

    printf("%d", decimal);

    return 0;
}