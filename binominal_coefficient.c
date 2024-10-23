#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    if (scanf("%d", &n) != 1 || getchar() != '\n' || n < 0) {
        printf("n/a");
        return 1;
    }

    for (int k = 0; k <= n; k++) {
        int binomial_coefficient = factorial(n) / (factorial(k) * factorial(n - k));
        printf("%d", binomial_coefficient);
        if (k < n) {
            printf(" ");
        }
    }

    return 0;
}

int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}