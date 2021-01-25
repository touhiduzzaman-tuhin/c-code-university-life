#include<stdio.h>
#include<math.h>

int main()
{
    int r;
    float area;

    printf("Enter radius of a circle : ");
    scanf("%d", &r);

    area = M_PI * r * r;
    printf("Area is : %f", area);

    return 0;
}
