#include<stdio.h>
#include<math.h>

int main()
{
    float n;

    printf("Enter any number : ");
    scanf("%f", &n);

    printf("e to the power %.2f = %.2f", n, exp(n));

    return 0;
}
