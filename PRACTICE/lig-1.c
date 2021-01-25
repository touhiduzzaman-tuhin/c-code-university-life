#include <stdio.h>

int main()
{
    int a, k, l, sum = 0, i;

    scanf("%d", &a);

    for(i = 1; i <= a; i++){
        scanf("%d %d", &k, &l);
        sum = k + l;
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
