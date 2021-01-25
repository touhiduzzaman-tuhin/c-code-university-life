#include<stdio.h>

int main()
{
    float a, b, fah, cel;

    printf("Enter the value of temperature in Fahrenheit : ");
    scanf("%f", &fah);


    a = 5/9;
    b = fah - 32;
    cel = a * b;
    printf("The temperature in Celsius : %f", cel);

    return 0;
}
