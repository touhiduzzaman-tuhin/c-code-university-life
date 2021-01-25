#include <stdio.h>

int main()
{
    int a, b, i, m, n, x, k;

    scanf("%d %d", &a, &b);

    if(a < 0){
        m = b;

        if(b < 0){
            m = b * -1;
        }

        for(i = 0; i < m; i++){
            k = a - i;

            if(k % b == 0){
                break;
            }
        }
        x = k / b;
    }

    else{
        x = a / b;
        i = a % b;
    }

    printf("%d %d\n", x, i);

    return 0;
}
