#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0, flag = 1;
    int *first = NULL;
    int n;

    first = (int *)malloc(100 * sizeof(int));
    if (first == NULL) {
        printf("n/a");
        return 1;
    }

    while (flag) {
        if (scanf("%d", &n) != 1) {
            printf("n/a");
            free(first);
            return 2;
        }
        if (n == -1)
            flag = 0;
        else if (n < 0) {
            printf("n/a");
            free(first);
            return 3;
        } else {
            if (size % 100 == 0) {
                int *second = realloc(first, (size + 100) * sizeof(int));
                if (second == NULL) {
                    printf("n/a");
                    free(first);
                    return 4;
                }
                first = second;
            }
            first[size++] = n;
        }
    }

    for (int i = 0; i < size / 2; i++) {
        printf("%d ", first[i]);
        if (i != size - i - 1) {
            printf("%d ", first[size - i - 1]);
        }
    }

    if (size % 2 != 0) {
        printf("%d", first[size / 2]);
    }

    free(first);
    return 0;
}