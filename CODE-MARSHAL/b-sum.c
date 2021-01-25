#include <stdio.h>

int main()
{
    int a, b, c, d;

    double x, y, z;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    x = (a * b);
    y = (b * d);
    z = (x+y) * (x-y) / (a+b+c+d);

    printf("%.3lf %.3lf %.3lf\n", x, y, z);

    return 0;
}
