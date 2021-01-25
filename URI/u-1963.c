#include <stdio.h>

int main()
{
    double a, b, c;
    char ch = '%';

    scanf("%lf %lf", &a, &b);

    c = ((b - a) * 100) / a;

    printf("%.2lf%c\n", c, ch);

    return 0;
}
