#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double x, y, z;

    scanf("%d %d %d", &a, &b, &c);

    x = (a + b + c) / 2;
    y = x*(x - a)*(x - b)*(x - c);
    z = sqrt(y);

    printf("%.2lf\n", z);

    return 0;
}
