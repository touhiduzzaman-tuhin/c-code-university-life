#include <stdio.h>

int main()
{
    double m;
    int i, count = 0;

    for(i = 1; i <= 6; i++){
        scanf("%lf", &m);

        if(m > 0){
            count++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}
