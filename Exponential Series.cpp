#include <stdio.h>
#include <math.h>

double exponentialSeries(double x, int terms) {
    double sum = 1.0;
    double term = 1.0;

    for (int n = 1; n <= terms; n++) {
        term *= x / n;
        sum += term;
    }

    return sum;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    double result = exponentialSeries(x, terms);
    printf("e^%.2f = %.4f\n", x, result);

    return 0;
}

