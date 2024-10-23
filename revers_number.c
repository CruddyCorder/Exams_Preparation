#include <stdio.h>

int main() {
    int number;

    if (scanf("%d", &number) != 1 || getchar() != '\n') {
        printf("n/a");
        return 1;
    }

    int sign = number < 0 ? -1 : 1;
    number = number * sign;

    if (number < 100 || number > 999) {
        printf("n/a");
        return 2;
    }

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    int result = units * 100 + tens * 10 + hundreds;

    if (sign == -1) {
        printf("-%03d", result);
    } else {
        printf("%03d", result);
    }

    return 0;
}