#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    printf("Enter any angle : ");
    scanf("%d", &n);

    printf("Tan (%d) is = %.2f", n, tan(n*M_PI/180));

    return 0;
}
