#include<stdio.h>

int main()
{
    int d, m, y;

    printf("Enter any date in format (DD/MM/YYYY) : ");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("\n Day = %d \n Month = %d \n Year = %d", d, m, y);

    return 0;
}
