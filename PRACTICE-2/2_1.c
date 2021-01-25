#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2, m, n, a, dif;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    m = (x1 - x2)*(x1 - x2);
    n = (y1 - y2)*(y1 - y2);
    a = m + n;
    dif = sqrt(a);

    printf("%d\n", dif);

    return 0;
}
