#include <stdio.h>

int main() {
    int n, d1, d2, d3, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 100 && n <= 999) {
        d1 = n % 10;
        n = n / 10;
        d2 = n % 10;
        d3 = n / 10;

        sum = d1 + d2 + d3;
        printf("Sum of digits = %d\n", sum);
    } else {
        printf("Not a three digit number\n");
    }

    return 0;
}
