#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b);

    c = b - a;

    if(a == b){
    printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else if(c < 0){
        printf("O JOGO DUROU %d HORA(S)\n", 24+c);
    }

    else{
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }

    return 0;
}
