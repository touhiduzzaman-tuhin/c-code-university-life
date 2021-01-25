#include <stdio.h>

int main()
{
    int a, i, min, b;

    scanf("%d", &a);

    int ara[a];

    for(i = 0; i < a; i++){
        scanf("%d", &ara[i]);
    }

    min = ara[0];

    for(i = 0; i < a; i++){
        if(min > ara[i]){
            min = ara[i];
            b = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", b);

    return 0;
}
