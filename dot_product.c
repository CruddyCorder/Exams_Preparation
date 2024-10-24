#include <stdio.h>
#include <stdlib.h>

int dot_production(int *first, int *second, int size);

int main() {
    int size = 0, n;
    int *first = NULL, *second = NULL;

    if (scanf("%d", &size) != 1 || getchar() != '\n' || size <= 0) {
        printf("n/a");
        return 1;
    }

    first = (int *)malloc(size * sizeof(int));
    second = (int *)malloc(size * sizeof(int));

    if (first == NULL || second == NULL) {
        printf("n/a");
        free(first);
        free(second);
        return 2;
    }

    for (int i = 0; i < size; i++) {
        if (scanf("%d", &n) != 1) {
            printf("n/a");
            free(first);
            free(second);
            return 3;
        }

        first[i] = n;
    }

    for (int i = 0; i < size; i++) {
        if (scanf("%d", &n) != 1) {
            printf("n/a");
            free(first);
            free(second);
            return 4;
        }

        second[i] = n;
    }

    int result = dot_production(first, second, size);

    printf("%d", result);

    free(first);
    free(second);

    return 0;
}

int dot_production(int *first, int *second, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += first[i] * second[i];
    }

    return result;
}