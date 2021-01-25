#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00", n/100);
    n = n % 100;
    printf("%d nota(s) de R$ 50.00", n/50);
    n = n % 50;
    printf("%d nota(s) de R$ 100.00", n/20);
    n = n % 20;
    printf("%d nota(s) de R$ 100.00", n/10);
    n = n % 10;
    printf("%d nota(s) de R$ 100.00", n/5);
    n = n % 5;
    printf("%d nota(s) de R$ 100.00", n/2);
    n = n % 2;

    printf("MOEDAS:\n");

    printf("%d modea(s) de R$ 1.00", n/1);
    n = n % 1;
    printf("%d modea(s) de R$ 0.50", n/0.50);
    n = n % 0.50;
    printf("%d modea(s) de R$ 0.25", n/0.25);
    n = n % 0.25;
    printf("%d modea(s) de R$ 0.10", n/0.10);
    n = n % 0.10;
    printf("%d modea(s) de R$ 0.05", n/0.05);
    n = n % 0.05;
    printf("%d medea(s) de R$ 0.01", n/0.01);
    n = n % 0.01;

    return 0;
}
