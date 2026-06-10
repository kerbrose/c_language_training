#include <math.h>
#include <stdio.h>

int main() {
    double x = 1.96*sqrt(1/2.); // 1.96 is the z-score for 95% confidence
    double result = erf(x);
    printf("erf(%f) = %f\n", x, result);
    return 0;
}