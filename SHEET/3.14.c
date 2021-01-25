#include<stdio.h>
#include<math.h>

int main()
{
    int x, y;

    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    printf("%d to the power %d = %.2f", x, y, pow(x,y));

    return 0;
}
