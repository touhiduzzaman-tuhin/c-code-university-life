#include<stdio.h>

int main()
{
    int r;
    float area, pi = 3.1416;

    printf("Enter radius of a circle : ");
    scanf("%d", &r);

    area = pi * r * r;
    printf("Area is : %f", area);

    return 0;
}
