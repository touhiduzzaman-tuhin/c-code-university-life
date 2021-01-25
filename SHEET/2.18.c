#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    n = (n << 2) + n;
    printf("Multiple by five using shift operator is : %d", n);

    return 0;
}
