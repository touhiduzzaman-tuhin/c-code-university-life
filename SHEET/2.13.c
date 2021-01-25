#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two integer number : ");
    scanf("%d %d", &a, &b);

    c = a & b;
    printf("The bitwise AND is %d & %d = %d", a, b, c);

    return 0;
}
