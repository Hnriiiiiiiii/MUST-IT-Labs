#include <stdio.h>
#include <stdlib.h>

int main() {
    int secret = 7;
    int guess;

    printf("1-10 hoorond toog taana uu: ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("Bayar hurgie. Zuv taalaa.\n");
    } else if (guess < secret) {
        printf("Bagadaj baina.\n");
    } else {
        printf("Ih baina.\n");
    }

    system("pause");
    return 0;
}