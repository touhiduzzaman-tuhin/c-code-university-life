#include <stdio.h>

int main()
{
    int n, i, sum, count = 0, j;

    while(scanf("%d", &n) != EOF)
    {
        sum = 1;
        count++;

        sum = sum + (n * (n + 1)) / 2;

        if(n == 0){
            printf("Caso %d: %d numero\n", count, sum);
        }
        else{
            printf("Caso %d: %d numeros\n", count, sum);
        }

        printf("0");

        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
                printf(" %d", i);
            }
        }

        printf("\n\n");
    }

    return 0;
}
