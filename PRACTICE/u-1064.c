#include <stdio.h>

int main()
{
    double m, sum = 0;
    int i, count = 0;

    for(i = 1; i <= 6; i++){
        scanf("%lf", &m);

        if(m > 0){
            count++;
            sum = sum + m;
        }
    }

    printf("%d valores positivos\n%.1lf\n", count, sum/count);

    return 0;
}

