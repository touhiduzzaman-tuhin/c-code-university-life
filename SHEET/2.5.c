#include<stdio.h>

int main()
{
    int a, b;
    float div;

    printf("Enter two integer number : ");
    scanf("%d %d", &a, &b);

    div = a / b;
    printf("The floating point number is : %f", div);

    return 0;
}
