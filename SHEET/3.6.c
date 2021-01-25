#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    printf("Enter any angle : ");
    scanf("%d", &n);

    printf("Sec (%d) is = %.2f", n, 1/cos(n*M_PI/180));n

    return 0;
}
