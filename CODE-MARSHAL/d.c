#include <stdio.h>

int main()
{
    int b, c, s, bill;

    scanf("%d %d %d", &b, &c, &s);

    bill = (b + c) * s;

    printf("%d\n", bill);

    return 0;
}
