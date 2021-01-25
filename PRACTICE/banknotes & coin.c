#include <stdio.h>

int main()
{
    double i,a, c, d,e,f,g,h;
    int n,b;
    scanf("%lf", &a);
    n = a;
    c = a - n;
    d = c * 100;
    b = d;
    e=b/50;
    b=b%50;
    f=b/25;
    b=b%25;
    g=b/10;
    b=b%10;
    h=b/5;
    b=b%5;
    i=b/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n/100);
    n = n % 100;

    printf("%d nota(s) de R$ 50.00\n", n/50);
    n = n % 50;

    printf("%d nota(s) de R$ 20.00\n", n/20);
    n = n % 20;

    printf("%d nota(s) de R$ 10.00\n", n/10);
    n = n % 10;

    printf("%d nota(s) de R$ 5.00\n", n/5);
    n = n % 5;

    printf("%d nota(s) de R$ 2.00\n", n/2);
    n = n % 2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", n/1);

    printf("%.0lf moeda(s) de R$ 0.50\n", e);
    printf("%.0lf moeda(s) de R$ 0.25\n", f);
    printf("%.0lf moeda(s) de R$ 0.10\n", g);
    printf("%.0lf moeda(s) de R$ 0.05\n", h);
    printf("%.0lf moeda(s) de R$ 0.01\n", i);

    return 0;
}
