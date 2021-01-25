#include <stdio.h>

int main()
{
    int i, j, a, n, matrix[10][10];
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);
        for(i = 1; i <= a; i++){
            for(j = 1; j <= a; j++){
                printf("%d", matrix[i][j]);
            }
        }
    }

    return 0;
}
