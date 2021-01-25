#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    y = *p;
    *p = 15;
    *q = 20;

    printf("%d %d %d %d\n", x, y, *p, *q);

    return 0;
}
