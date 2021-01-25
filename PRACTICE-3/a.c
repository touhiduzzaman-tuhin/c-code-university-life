#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, i, m;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        m = sqrt(a);

        printf("%d\n", m);
    }

    return 0;
}
