#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0;

    for(i = 1; i <= 5; i++){
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("%.2lf\n", sum/5);

    return 0;
}
