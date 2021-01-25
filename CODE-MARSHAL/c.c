#include <stdio.h>

int main()
{
    int n, m;
    double a;
    char ch;

    scanf("%d %d", &n, &m);
    scanf("%lf", &a);
    getchar();
    ch = getchar();

    printf("%d %d\n", n, m);
    printf("%.2lf\n", a);
    printf("%c\n", ch);

    return 0;
}
