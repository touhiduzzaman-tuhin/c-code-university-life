#include <stdio.h>

int main()
{
    int a, i, n, m, k, l;

    scanf("%d", &a);

    for(i = 1; i <= a; i++){
        n = i*i;
        m = i*i*i;
        k = n + 1;
        l = m + 1;
        printf("%d %d %d\n%d %d %d\n", i, n, m, i, k, l);
    }

    return 0;
}
