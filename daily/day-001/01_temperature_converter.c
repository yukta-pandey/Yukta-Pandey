#include <stdio.h>

int main(void)
{
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Fahrenheit = %.2f\n", (celsius * 9.0f / 5.0f) + 32.0f);
    return 0;
}
