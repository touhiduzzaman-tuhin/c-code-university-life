#include<stdio.h>

int main()
{
    int d, m, y;

    printf("Enter any date (DD MM YYYY) : ");
    scanf("%d %*c %d %*c %d", &d, &m, &y);

    printf("\n Day = %d \n Month = %d \n Year = %d", d, m, y);

    return 0;
}
