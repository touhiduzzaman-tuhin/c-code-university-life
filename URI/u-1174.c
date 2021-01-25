#include <stdio.h>

int main()
{
    double ara[100];
    int i;

    for(i = 0; i < 100; i++){
        scanf("%lf", &ara[i]);
    }

    for(i = 0; i < 100; i++){
        if(ara[i] <= 10.0){
            printf("A[%d] = %.1lf\n", i, ara[i]);
        }
    }

    return 0;
}
