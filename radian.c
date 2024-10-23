#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    double radians;

    if (scanf("%lf", &radians) != 1) {
        printf("n/a");
        return 1;
    }

    double degrees = radians * (180.0 / M_PI);
    printf("%.0lf", round(degrees));

    return 0;
}