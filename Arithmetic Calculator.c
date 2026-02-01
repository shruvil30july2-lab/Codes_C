#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
    if (op == '+') {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (op == '-') {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (op == '*') {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (op == '/') {
        if (b == 0) {
            printf("Division not possible");
        }
        else {
            printf("%d / %d = %.2f", a, b, (float)a/b);
        }
    }
    else {
        printf("Invalid Operator");
    }
    return 0;
}