#include <stdio.h>

int main()
{
    int n, a, i, fac, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        fac = 1;

        for(j = a; j >= 1; j--){
            fac = fac * j;
        }

        printf("Case %d: %d\n", i, fac);
    }

    return 0;
}
