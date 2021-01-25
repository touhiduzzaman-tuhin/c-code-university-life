#include <stdio.h>

int main()
{
    int n, a, i, b, d = 0, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        b = a / 2;
        d = 0;

        for(j = 1; j <= b; j++)
        {
            if(a % j == 0)
                d = d + j;
        }
        if(d == a){
            printf("%d eh perfeito\n",a);
        }

        else{
            printf("%d nao eh perfeito\n",a);
        }
    }

    return 0;
}
