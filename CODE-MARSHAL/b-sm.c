#include <stdio.h>

int main()
{
    int n, a, b, c, d, i, sum;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = 0;
        sum = a + b + c + d;

        printf("%d\n", sum);
    }

    return 0;
}
