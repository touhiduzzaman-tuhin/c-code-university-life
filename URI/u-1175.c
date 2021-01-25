#include <stdio.h>

int main()
{
    int ara[20], i, j, temp;

    for(i = 0; i < 20; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0, j = 19; i < 10; i++, j--){
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, ara[i]);
    }

    return 0;
}
