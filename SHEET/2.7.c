#include<stdio.h>

int main()
{
    int r;
    float area;

    printf("Enter the radius of a circle : ");
    scanf("%d", &r);

    area = 3.1416 * r * r;
    printf("Area is : %f", area);

    return 0;
}
