#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3 || getchar() != '\n') {
        printf("n/a");
        return 1;
    }

    int result = (c > a && c < b) || (c < a && c > b) ? 1 : 0;

    printf("%d", result);

    return 0;
}