#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, max;

    printf("a, b, c toog daraalan oruul:\n");
    scanf("%f%f%f", &a, &b, &c);
    

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Hamgiin ih too: %.2f\n", max);

    system("pause");
    return 0;
}