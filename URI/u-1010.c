#include <stdio.h>

int main()
{
    int a, b[2], i;
    double n[2], total;

    for(i = 1; i <= 2; i++){
        scanf("%d %d %lf", &a, &b[i], &n[i]);
    }

    total = ((b[1]*n[1]) + (b[2]*n[2]));

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
