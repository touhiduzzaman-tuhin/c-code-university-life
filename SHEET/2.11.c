#include<stdio.h>

int main()
{
    float cel, fah;

    printf("Enter the value of temperature in Celsius : ");
    scanf("%f", &cel);

    fah = 1.8 * cel + 32;
    printf("The temperature in Fahrenheit is : %f", fah);

    return 0;
}
