#include <stdio.h>

int main()
{
    int x, y, *z;

    x = 25;
    y = 55;
    z = &y;

    printf("X = %d\t Y = %d\t Z = %x\n", x, y, z);

    x = *z;
    *z = 15;

    printf("X = %d\t Y = %d\t Z = %x\n", x, y, z);

    return 0;
}
