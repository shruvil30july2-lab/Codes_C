#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
    } else {
        d = (b * b) - (4 * a * c);

        if (d > 0)
            printf("Two distinct real roots\n");
        else if (d == 0)
            printf("One real root\n");
        else
            printf("No real roots\n");
    }

    return 0;
}
