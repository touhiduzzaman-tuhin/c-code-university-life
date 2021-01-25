#include <stdio.h>

int main()
{
    int a, b, c, n, sum;
    scanf("%d", &n);

    a = n + 1;
    b = n * a;
    c = b / 2;

    //sum = [n*(n + 1)/2]*2;
    sum = c * c;
    printf("%d", sum);

    return 0;
}
