#include <stdio.h>

int main()
{
    int a, b;
    double n, SALARY;

    scanf("%d %d %lf", &a, &b, &n);

    SALARY = b * n;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a, SALARY);
    return 0;
}
