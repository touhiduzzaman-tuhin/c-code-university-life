#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d;
    double x1, x2;

    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    x1 = (-b + sqrt(d)) / (2*a);
    x2 = (-b - sqrt(d)) / (2*a);

    printf("%.2lf\n%.2lf\n", x1, x2);

    return 0;

}
