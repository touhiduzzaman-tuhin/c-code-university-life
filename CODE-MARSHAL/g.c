#include <stdio.h>

int main()
{
    long long a, b, res = 0;

    scanf("%lli %lli", &a, &b);

    res = ((a+2*a) - b) * 3;

    printf("%lli\n" ,res);

    return 0;
}
