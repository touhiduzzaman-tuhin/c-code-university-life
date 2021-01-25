#include <stdio.h>

int main()
{
    long long int n, m;

    scanf("%lld", &n);

    m = (n *(n - 3)) / 2;

    printf("%lld\n", m);

    return 0;
}
