#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    double r;
    const double P = 21500.0;

    if (scanf("%lf", &r) != 1 || getchar() != '\n') {
        printf("n/a");
        return 1;
    }

    double V = (4.0 / 3.0) * M_PI * pow(r, 3);
    double m = P * V;

    printf("%.0lf", round(m));

    return 0;
}