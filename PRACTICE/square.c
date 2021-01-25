#include <stdio.h>

int main()
{
    int a, b, c, n, sum;
    scanf("%d", &n);

    a = n + 1;
    b = (n+n) + 1;
    c = n * a * b;
    //sum = (n*(n + 1)(2n+ 1))/6;
    sum = c / 6;
    printf("%d", sum);

    return 0;
}
