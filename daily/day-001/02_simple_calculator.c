#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("Enter expression: ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+')
        printf("Result = %d\n", a + b);
    else if (op == '-')
        printf("Result = %d\n", a - b);
    else if (op == '*')
        printf("Result = %d\n", a * b);
    else if (op == '/' && b != 0)
        printf("Result = %d\n", a / b);
    else
        printf("Invalid operation\n");

    return 0;
}
