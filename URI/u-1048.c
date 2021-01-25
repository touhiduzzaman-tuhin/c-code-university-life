#include <stdio.h>

int main()
{
    double a, m;
    int n;

    scanf("%lf", &a);

    if(a <= 400.00){
        n = 15;
        m = a * 15.00/100.00;
    }
    else if(a >= 400.00 && a <= 800.00){
        n = 12;
        m = a * 12.00/100.00;
    }
    else if(a >= 800.00 && a <= 1200.00){
        n = 10;
        m = a * 10.00/100.00;
    }
    else if(a >= 1200.00 && a <= 2000.00){
        n = 7;
        m = a * 7.00/100.00;
    }
    else{
        n = 4;
        m = a * 4.00/100.00;
    }

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n", a+m, m, n, '%');

    return 0;
}
