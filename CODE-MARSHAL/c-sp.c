#include <stdio.h>

int main()
{
    int n, a, b, i, c, d, m;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);

        c = a+b;
        d = a-b;
        m = (c*c) - (d*d);
        printf("Case %d: %d\n", i, m);
    }

    return 0;
}
