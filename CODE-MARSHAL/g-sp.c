#include <stdio.h>

int main()
{
    int n, a, i, j, sum;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        sum = 0;
        for(j = n; j >= 0; j--){
            sum = sum + j*j;
        }
        printf("%d\n", sum);
    }

    return 0;
}
