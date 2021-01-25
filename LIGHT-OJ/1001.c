#include <stdio.h>

int main()
{
    int a, n, i, count, c, b, m;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        if(a > 10){
            m = a - 10;
            b = a - m;

            printf("%d %d\n", m, b);
        }
        else{
            printf("0 %d\n", a);
        }
    }

    return 0;
}
