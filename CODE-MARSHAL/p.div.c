#include <stdio.h>

int main()
{
    int n, a, count, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);
        count = 0;
        for(j = 0; j <= a; j++){
            if(j % 3 == 0){
                count++;
            }
        }
        printf("Case %d: %d\n", i, count);
    }

    return 0;
}
