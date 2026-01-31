#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    float d;

    printf("Enter units of electricity consumed: ");
    scanf("%d",&a);

    if (a <= 100) {
        d = a * 1;
    }
    else if (a > 100 && a <= 200) {
        b = a - 100;
        d = 100 + (b * 2);
    }
    else {
        c = a - 200;
        d = 300 + (c * 3);
    }

    if (d > 250)
        d = d + (0.1 * d);

    printf("Total bill amount is: %.2f\n", d);

    return 0;
}
