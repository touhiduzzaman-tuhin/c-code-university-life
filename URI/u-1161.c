#include <stdio.h>

int main()
{
    int a, b, i, j;
    long long int n, sum_a = 1, sum_b = 1;

    while(scanf("%d %d", &a, &b) != EOF){

    sum_a = 1;
    sum_b = 1;

    for(i = 1; i <= a; i++){
        sum_a = sum_a * i;
    }

    for(j = 1; j <= b; j++){
        sum_b = sum_b * j;
    }

    n = sum_a + sum_b;

    printf("%lld\n", n);

    }

    return 0;
}
