#include <stdio.h>

int main() {
    int number;
    int max_digit = -1;

    if (scanf("%d", &number) != 1 || getchar() != '\n') {
        printf("n/a");
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        max_digit = 0;
        printf("%d", max_digit);
        return 0;
    }

    while (number > 0) {
        int digit = number % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        number /= 10;
    }

    printf("%d", max_digit);

    return 0;
}