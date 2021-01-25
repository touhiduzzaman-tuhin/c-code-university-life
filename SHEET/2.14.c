#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    c = a | b;
    printf("Bitwise or is %d | %d = %d", a, b, c);

    return 0;
}
