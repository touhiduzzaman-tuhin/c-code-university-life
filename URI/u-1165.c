#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, a, b, j;

    scanf("%d", &n);

    for(j = 1; j <= n; j++)
    {
        scanf("%d", &a);

        b = sqrt(a);

        for(i = 2; i <= b; i++){
            if(a % i == 0){
                printf("%d nao eh primo\n", a);
                break;
            }
        }

        if(i == b+1){
            printf("%d eh primo\n", a);
        }

    }

    return 0;
}
