#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int max_name = 100;

    struct Student {
        char surname[max_name];
        int grade;
    };

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("n/a");
        return 1;
    }

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("n/a");
        return 2;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%s %d", students[i].surname, &students[i].grade) != 2) {
            printf("n/a");
            free(students);
            return 3;
        }
    }

    int highest_grade = students[0].grade;
    for (int i = 1; i < n; i++) {
        if (students[i].grade > highest_grade) {
            highest_grade = students[i].grade;
        }
    }

    for (int i = 0; i < n; i++) {
        if (students[i].grade == highest_grade) {
            printf("%s", students[i].surname);
            if (i < n) {
                printf(" ");
            }
        }
    }

    free(students);

    return 0;
}