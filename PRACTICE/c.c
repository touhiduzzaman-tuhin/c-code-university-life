#include <stdio.h>

int fun(int *i, int j)
{
    (*i)++;
    j++;

    printf("funI = %d funJ = %d\n", *i, j);
    return *i+j;
}

int main()
{
    int i = 4, j = 2, k = 0;

    k = fun(&i, j);

    printf("I = %d j = %d k = %d\n", i, j, k);

    return 0;
}
