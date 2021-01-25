#include <stdio.h>

int main()
{
    int R;
    double pi = 3.14159, area;

    scanf("%d", &R);

    area = (4.0/3*pi*R*R*R);

    printf("VOLUME = %.3lf\n", area);

    return 0;
}
