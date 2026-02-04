#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        printf("Middle number = %d\n", a);
    else if ((b > a && b < c) || (b > c && b < a))
        printf("Middle number = %d\n", b);
    else
        printf("Middle number = %d\n", c);

    return 0;
}
