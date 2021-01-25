#include <stdio.h>

int sum(int x, int y)
{
    int c;

    c = x + y;

    return c;
}

int main()
{
    int a, b, c;

    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d", &b);

    c = sum(a, b);

    printf("Sum of %d and %d is: %d\n", a, b, c);

    return 0;
}
