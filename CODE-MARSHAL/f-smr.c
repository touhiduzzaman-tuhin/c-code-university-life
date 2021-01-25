#include <stdio.h>

int main()
{
    int ara[10][10], i, n, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
           printf("%4d", ara[i][j]);

            if(j < n){
                printf(" ");
            }
        }
        printf("\n");
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){

           if(i == j){
                printf("%4d", ara[i][j]);
           }

        }
    }
    printf("\n");

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){

           if(i < j){
                printf("%4d", ara[i][j]);
           }

        }
    }

    printf("\n");

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){

           if(i > j){
                printf("%4d", ara[i][j]);
           }

        }
    }

    printf("\n");

    i = 1;
    while(n > 0)
    {

        for(j = i; j <= n; j++){
            printf("%4d", ara[i][j]);
        }
        for(j = i+1; j <= n; j++){
            printf("%4d", ara[i][j]);
        }
        for(j = n-1; j > i-1; j--){
            printf("%4d", ara[i][j]);
        }
        for(j = n-1; j > i; j--){
            printf("%4d", ara[i][j]);
        }
        i++;
        n--;
    }

    return 0;
}
