#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("n/a\n");
        return 0;
    }

    int **matrix = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int));
    }

    int valid_input = 1;
    for (int i = 0; i < n && valid_input; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                valid_input = 0;
                break;
            }
        }
    }

    if (valid_input) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", matrix[j][i]);
                if (j < n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
        printf("n/a\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}