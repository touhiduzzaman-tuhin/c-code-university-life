#include<stdio.h>

#define pi  3.1416

int main()
{
    int r;
    float area;

    printf("Enter radius of a circle : ");
    scanf("%d", &r);

    area = pi * r * r;
    printf("Area is : %f", area);

    return 0;
}
