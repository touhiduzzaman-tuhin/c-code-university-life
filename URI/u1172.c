#include <stdio.h>

int main()
{
    int ara[10], i;

    for(i = 0; i < 10; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < 10; i++){
        if(ara[i] <= 0){
            ara[i] = 1;
        }
    }

    for(i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, ara[i]);
    }

    return 0;
}
