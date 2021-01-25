#include <stdio.h>
#include <math.h>

double area(int r)
{
    return M_PI*r*r;
}

int main()
{
    int radius;

    printf("Enter radius: \n");
    scanf("%d", &radius);

    printf("Area of circle : %.2lf\n", area(radius));

    return 0;
}
