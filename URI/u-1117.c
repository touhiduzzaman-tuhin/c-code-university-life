#include <stdio.h>

int main()
{
    double n, a, count = 0, sum = 0;

    while(1)
    {

        if(count == 2){
            break;
        }

        scanf("%lf", &a);

        if(a >= 0 && a <= 10){
           count++;
           sum = sum + a;
        }
        else{
            printf("nota invalida\n");
        }

    }
    n = sum/2.00;
    printf("media = %.2lf\n", n);

    return 0;
}
