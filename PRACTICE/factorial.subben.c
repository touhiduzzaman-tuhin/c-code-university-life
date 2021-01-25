#include <stdio.h>

int main()
{
    int a, b = 1, i, j, N;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        scanf("%d", &a);
        for(j = 1; j <= a; j++){
            b = b * j;
        }
        printf("%d ", b);
    }
    //printf("%d ", b);

    return 0;
}
