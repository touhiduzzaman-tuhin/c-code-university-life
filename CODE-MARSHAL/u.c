#include <stdio.h>

int main()
{
    int n, i, j, a, ara[1005];

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        for(j = 0; j < a; j++){
            scanf("%d", &ara[j]);
        }
        printf("%d", ara[a-1]);

        for(j = a-2; j >= 0; j--){
            printf(" %d", ara[j]);
        }
        printf("\n");
    }

    return 0;
}
