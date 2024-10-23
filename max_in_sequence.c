#include <stdio.h>

int main() {
    int n;
    int max = -1;
    int flag = 1;

    while (flag) {
        if (scanf("%d", &n) != 1) {
            printf("n/a");
            return 1;
        }

        if (n == -1) {
            flag = 0;
        } else if (n < 0) {
            printf("n/a");
            return 2;
        } else {
            if(n > max) {
                max = n;
            }
        }
    }

    printf("%d", max);

    return 0;
}