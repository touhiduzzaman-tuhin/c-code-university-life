#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    printf("Enter any angle : ");
    scanf("%d", &n);

    printf("Cosec (%d) is = %.2f", n, 1/sin(n*M_PI/180));

    return 0;
}
