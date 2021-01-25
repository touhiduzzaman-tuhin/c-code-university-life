#include <stdio.h>

int main()
{
    int v, t, s;

    while(scanf("%d %d", &v, &t) !=EOF){
        s = v * t;

        printf("%d\n", 2 * s);
    }

    return 0;
}

