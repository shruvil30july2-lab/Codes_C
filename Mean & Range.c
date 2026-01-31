#include <stdio.h>

int main() {
    int a, b, c;
    float d;
    int e, f;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);

    d = (a + b + c) / 3.0;
    printf("Mean is: %.2f\n", d);

    if ((a > b) && (a > c)) {
        e = a;
        if (b > c)
            f = c;
        else
            f = b;
    }
    else if ((b > a) && (b > c)) {
        e = b;
        if (a > c)
            f = c;
        else
            f = a;
    }
    else {
        e = c;
        if (b > a)
            f = a;
        else
            f = b;
    }

    printf("Range is: %d\n", e - f);
    return 0;
}
