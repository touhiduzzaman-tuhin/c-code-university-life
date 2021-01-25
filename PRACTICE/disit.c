#include <stdio.h>

int main()
{
    int n, i, p, res = 0;
    scanf("%d", &n);

    for(i = n; i != 0; i = i / 10){
        p = i % 10;
        printf("%d", p);
        res++;
    }
    printf("\n%d\n", res);

    return 0;
}
