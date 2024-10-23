#include <stdio.h>

int main() {
    int number;
    int product = 1;
    int has_odd = 0;

    if (scanf("%d", &number) != 1 || getchar() != '\n') {
        printf("n/a");
        return 1;
    }

    number = number < 0 ? -number : number;

    if (number == 0) {
        printf("0");
        return 0;
    }

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        number /= 10;
    }

    if (!has_odd) {
        printf("0");
    } else {
        printf("%d", product);
    }

    return 0;
}