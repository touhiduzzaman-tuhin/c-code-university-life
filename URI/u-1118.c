#include <stdio.h>

int main()
{
    double n, a;

    while(1)
    {
        scanf("%lf", &n);

        if(n >= 0 && n <= 10){

        }
        else if(n == 1){
            printf("novo calculo (1-sim 2-nao)\n");
            continue;
        }

        else{
            printf("nota invalida\n");
            continue;
        }
    }
    return 0;
}
