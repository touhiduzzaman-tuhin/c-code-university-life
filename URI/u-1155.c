#include <stdio.h>

int main()
{
    double n = 1, i, c, sum = 0;

    for(i = 1; i <= 100; i++){
        c = n/i;
        sum = sum + c;
    }

    printf("%.2lf\n", sum);

    return 0;
}
