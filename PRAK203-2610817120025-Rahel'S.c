#include <stdio.h>

int main() {
    double a, b, i, j, x, y;
    double hasil;

    if (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y)) {
        hasil = ((a - b) * (i / j) - (x + y));
        printf("%.3f\n\n", hasil);
    }

    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &i, &j);
    scanf("%lf %lf", &x, &y);
    hasil = (a - b) * (i / j) - (x + y);
    printf("%.3f\n", hasil);

    return 0;
}