#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3 || (a > 1 || a < 0) || (b > 1 || b < 0) || (c > 1 || c < 0) || getchar() != '\n') {
        printf("n/a");
        return 1;
    }

    int result = a && (b || c);
    printf("%d", result);

    return 0;
}