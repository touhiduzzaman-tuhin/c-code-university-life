#include <stdio.h>

long rectarea(int l, int w)
{
    return (long)l*w;
}

int main()
{
    int length, width;

    printf("Length is: \n");
    scanf("%d", &length);
    printf("Width is: \n");
    scanf("%d", &width);

    printf("Area is: %ld", rectarea(length, width));

    return 0;
}
