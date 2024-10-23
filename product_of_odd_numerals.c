#include <stdio.h>

int main() {
    int number, flag = 1;
    int count = 0;
    int product = 1;
    int has_odd = 0;

    while (flag) {
        if (scanf("%d", &number) != 1) {
            printf("n/a");
            return 1;
        } else if (number == -1) {
            flag = 0;
        } else {
            count++;
            if (number % 2 != 0) {
                product *= number;
                has_odd = 1;
            }
        }
    }

    if (count == 0) {
        printf("0");
    } else if (count == 1) {
        printf("%d", number < 0 ? -number : number);
    } else if (count == 2) {
        printf("0");
    } else {
        printf("%d", has_odd ? product : 0);
    }

    return 0;
}