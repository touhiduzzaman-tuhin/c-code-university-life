#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    n = n >> 1;
    printf("Divide by two using operator is : %d", n);

    return 0;
}
