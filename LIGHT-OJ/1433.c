#include <stdio.h>
#include <math.h>

int main()
{
    double ax, ay, ox, oy, bx, by, a, b, c, m;
    int i, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &ox, &oy, &bx, &by);

        a = sqrt(((ox - ax) * (ox - ax) + (oy - ay) * (oy - ay)));
        b = sqrt(((ax - bx) * (ax - bx) + (ay - by) * (ay - by)));
        c = acos(2*a*a - c*c) / (2*a*a);
        m = c * a;

        printf("Case %d: %lf\n", i+1, m);
    }

    return 0;
}
