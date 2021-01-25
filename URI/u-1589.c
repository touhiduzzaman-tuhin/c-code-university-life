#include <stdio.h>

int main()
{
    int a, m, n, i, sum;

    scanf("%d", &a);

    for(i = 0; i < a; i++){
        scanf("%d %d", &m, &n);

        sum = m + n;

        printf("%d\n", sum);
    }

    return 0;
}
