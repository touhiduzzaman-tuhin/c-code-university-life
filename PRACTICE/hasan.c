#include <stdio.h>

int main()
{
    int a, i, n;
    double res;
    res = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        res = res + log10(i);
    }
    a = res + 1;
    printf("%d", a);

    return 0;
}
