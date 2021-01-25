#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    n = n & 7;
    printf("Mod by 7 using shift operator is : %d", n);

    return 0;
}
