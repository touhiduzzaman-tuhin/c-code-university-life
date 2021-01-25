#include <stdio.h>

int main()
{
    int a, b, c, i, j, n, t, temp;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        c = a;
        printf("%d\n", c);
    }

    return 0;
}
