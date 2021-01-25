#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    printf("Enter any angle : ");
    scanf("%d", &n);

    printf("Cos (%d) is = %.2f ", n, cos(n*M_PI/180));

    return 0;
}
