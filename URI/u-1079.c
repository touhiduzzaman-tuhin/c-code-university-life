#include <stdio.h>

int main()
{
    double a, b, c, m, n;
    int t, i;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        m = a*2 + b*3 + c*5;
        n = m/10;
        printf("%.1lf\n", n);
    }

    return 0;
}
