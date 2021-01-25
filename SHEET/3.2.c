#include<stdio.h>
#include<math.h>

int main()
{
    int n, res;

    printf("Enter any angle : ");
    scanf("%d", &n);

    printf("Sin (%d) is = %.2f", n, sin(n*M_PI/180));

    return 0;
}
