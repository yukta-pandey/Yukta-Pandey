#include <stdio.h>

int main(void)
{
    int n, i;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial = %lld\n", factorial);
    return 0;
}
