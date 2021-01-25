#include<stdio.h>
#include<math.h>

int main()
{
    double n;

    printf("Enter any number : ");
    scanf("%lf", &n);

    printf("log(%.2lf) = %.2lf", n, log(n));

    return 0;
}
