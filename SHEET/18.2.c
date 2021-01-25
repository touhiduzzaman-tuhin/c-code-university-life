#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;

    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d", &b);

    printf("Sum of %d and %d is: %d\n", a, b, sum(a, b));

    return 0;
}
