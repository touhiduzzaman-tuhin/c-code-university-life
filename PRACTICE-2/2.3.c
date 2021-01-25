#include <stdio.h>

int main()
{
    double r, pi, area;

    scanf("%lf", &r);

    pi = acos(-1);

    area = pi * r * r;

    printf("%.2lf\n", area);

    return 0;
}
