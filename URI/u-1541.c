#include <stdio.h>

int main()
{
    int a, b, c, m, n, k;

    while(1)
    {
        scanf("%d", &a);

        if(a == 0){
            break;
        }
        else{
            scanf("%d %d", &b, &c);
        }

        m = a * b;
        n = (m * 100) / c;
        k = pow(n, .5);

        printf("%d\n", k);
    }

    return 0;
}
