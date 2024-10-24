#include <stdio.h>
#include <stdlib.h>

int is_unique(int *first, int size, int number) {
    for (int i = 0; i < size; i++) {
        if (first[i] == number) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int *first = NULL;
    int size = 0, capacity = 10;
    int number;
    int flag = 1;

    first = (int *)malloc(capacity * sizeof(int));
    if (first == NULL) {
        printf("n/a");
        return 1;
    }

    while (flag) {
        if (scanf("%d", &number) != 1) {
            free(first);
            printf("n/a");
            return 1;
        }

        if (number == -1) {
            flag = 0;
        } else if (number < 0) {
            free(first);
            printf("n/a");
            return 1;
        } else {
            if (is_unique(first, size, number)) {
                if (size >= capacity) {
                    capacity *= 2;
                    first = realloc(first, capacity * sizeof(int));
                    if (first == NULL) {
                        printf("n/a");
                        return 1;
                    }
                }
                first[size++] = number;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d", first[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }

    free(first);
    return 0;
}