#include<stdio.h>

int main()
{
    int a, b, rem;

    printf("Enter two integer number : ");
    scanf("%d %d", &a, &b);
    rem = a % b;

    printf("The remainder is : %d", rem);

    return 0;
}
