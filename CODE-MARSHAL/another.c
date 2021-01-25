#include<stdio.h>

int main()
{
    int a, b;
    double n;
    char ch;

    scanf("%d %d", &a, &b);
    scanf("%lf", &n);
    getchar();
    ch=getchar();

    printf("%d %d\n%.2lf\n%c\n", a, b, n, ch);

    return 0;
}
