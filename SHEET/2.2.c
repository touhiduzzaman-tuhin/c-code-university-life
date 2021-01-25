#include<stdio.h>

int main()
{
    int a, b, sub;

    printf("Enter two integer : ");
    scanf("%d %d", &a, &b);

    sub = a - b;
    printf("The subtraction is : %d", sub);

    return 0;
}
