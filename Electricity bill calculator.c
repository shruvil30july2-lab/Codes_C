#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units of electricity consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1;
    }
    else if (units <= 200) {
        bill = 100 + (units - 100) * 2;
    }
    else {
        bill = 100 + 200 + (units - 200) * 3;
    }

    if (bill > 250) {
        bill = bill + 0.1 * bill;
    }

    printf("Total bill amount is: %.2f\n", bill);

    return 0;
}