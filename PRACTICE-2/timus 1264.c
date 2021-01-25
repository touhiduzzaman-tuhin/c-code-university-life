#include <stdio.h>

int main()
{
    int n, m, i, j, count = 0;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++){
        for(j = 0; j <= n; j++){
             //if(i == j){
                count++;
             //}
        }
    }

    printf("%d\n", count);

    return 0;
}
