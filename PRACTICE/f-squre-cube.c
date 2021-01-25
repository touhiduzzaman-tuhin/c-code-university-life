#include <stdio.h>

void squre_num()
{
    int i;

    for(i = 1; i <= 10; i++){
        printf("%3d %4d\n", i, i*i);
    }
}

void cube_num()
{
    int i;

    for(i = 1; i <= 10; i++){
        printf("%3d %d4\n", i, i*i*i);
    }
}

void main()
{
    squre_num();
    cube_num();
}
