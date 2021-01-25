#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    n = n << 1;
    printf("Multiple by two using shift operator is : %d", n);

    return 0;
}
