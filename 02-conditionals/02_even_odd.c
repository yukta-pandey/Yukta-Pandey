#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Even\\n");
    else
        printf("Odd\\n");

    return 0;
}
