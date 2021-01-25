#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    n = n & 3;
    printf("Mod by 4 using bitwise and is : %d", n);

    return 0;
}
