#include <stdio.h>

int main()
{
    int p, q, *x, *y, a, b, c;
    p = 20, q = 10;

    x = &p;
    y = &q;
    a = (*x) * (*y);
    b = a + (*x);
    c = 5 - ((*x)/(*y));
    *x = *x + 10;


    return 0;
}
