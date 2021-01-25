#include <stdio.h>

int main()
{
    int a, b, i, c, m = 0;

    scanf("%d", &a);

    do{
        scanf("%d", &b);
    }

    while(a >= b);

    for(i = a, c = 0; c < b; i++){
        c = c + i;
        m++;
    }

    printf("%d\n", m);

    return 0;
}
