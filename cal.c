#include <stdio.h>

int main() {
    int sum, sub, mul, div;
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("sum: %d\n", sum);
    printf("subtraction: %d\n", sub);
    printf("multiplication: %d\n", mul);
    printf("division: %d\n", div);

    return 0;
}