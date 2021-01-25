#include <stdio.h>

int main()
{
    int n, a, b, i, sum;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = 0;
        scanf("%d %d", &a, &b);
        sum  = a + b;
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
