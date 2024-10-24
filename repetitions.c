#include <stdio.h>
#include <stdlib.h>

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

    for (int i = size - 1; i >= 0; i--) {
        printf("%d", first[i]);
        if (i > 0) {
            printf(" ");
        }
    }

    free(first);
    return 0;
}