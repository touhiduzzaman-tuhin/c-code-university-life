#include <stdio.h>

double div(int x, int y)
{
    return (double)x/y;
}

int main()
{
    int a, b;

    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d", &b);

    printf("The division between %d and %d: %.2lf\n", a, b, div(a, b));

    return 0;
}
