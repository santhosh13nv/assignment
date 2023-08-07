#include <stdio.h>
#include <math.h>

double sineSeries(double x, int terms) {
    double sum = 0.0;
    int sign = 1;

    for (int n = 1; n <= terms; n += 2) {
        sum += sign * pow(x, n) / tgamma(n + 1);
        sign = -sign;
    }

    return sum;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    double result = sineSeries(x, terms);
    printf("sin(%.2f) = %.4f\n", x, result);

    return 0;
}


