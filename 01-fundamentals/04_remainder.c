#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Remainder after division by 2 = %d\\n", number % 2);
    return 0;
}
