#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    double ave;

    for(i = 0; i < 5; i++){
        scanf("%d ", &n);
        sum = sum + n;
    }
    ave = sum / 5;
    printf("%.2lf\n", ave);

    return 0;
}
