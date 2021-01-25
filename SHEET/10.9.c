#include <stdio.h>

int main()
{
    int n, i, ara[100], p;

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    printf("Enter any position to insert : ");
    scanf("%d", &p);

    if(p < 0 || p < n){
        printf("Insert is impossible\n");
    }
    else{
        for(i = n-1; i >= p; i--){
            ara[i+1] = ara[i];
            printf("Enter any number to insert : \n");
            scanf("%d", &ara[p]);
            n++;
        }
    }

    printf("After insert array contains : ");
    for(i = 1; i <= n; i++){
        printf("%d", ara[i]);
    }

    return 0;
}
