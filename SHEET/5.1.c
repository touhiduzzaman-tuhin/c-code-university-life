#include<stdio.h>

int main()
{
    int n;

    printf("Enter any integer number : ");
    scanf("%d", &n);

    printf("%s", (n % 2 == 0) ? "Even number.": "Odd number.");

    return 0;
}
