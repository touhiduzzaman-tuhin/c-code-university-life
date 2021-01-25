#include<stdio.h>
#include<math.h>

int main()
{
    double n;

    printf("Enter any number : ");
    scanf("%lf", &n);

    printf("log10(%.2lf) = %.2lf", n, log10(n));

    return 0;
}
