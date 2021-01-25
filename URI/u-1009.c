#include <stdio.h>

int main()
{
    char ch[50];
    double salary, bonous, total, extra;

    scanf("%s", &ch);
    scanf("%lf %lf", &salary, &bonous);

    extra = (bonous * 15) / 100;
    total = extra + salary;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
