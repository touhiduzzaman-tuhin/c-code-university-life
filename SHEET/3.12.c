#include<stdio.h>
#include<math.h>

int main()
{
    float n;

    printf("Enter a value : ");
    scanf("%f", &n);

    printf("Sec inverse (%.2f) is = %.2f", n, acos(1/n)*180/M_PI);

    return 0;
}
