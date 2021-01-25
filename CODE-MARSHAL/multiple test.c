#include <stdio.h>

int main()
{
    int T, a, b, x, s;

    scanf("%d", &T);

    for(x = 1; x <= T; x++){
        scanf("%d %d", &a, &b);
        s = a + b;
    }
    for(x = 1; x <= T; x++){
        printf("Case %d:", x);
        //s = a + b;
        printf(" %d\n", s);
    }

    return 0;
}
