#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("a, b, c koeffitsientuudig oruul:\n");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("x1 = x2 = %.2f\n", x1);
    } else {
        printf("Shiidgui.\n");
    }

    system("pause");
    return 0;
}