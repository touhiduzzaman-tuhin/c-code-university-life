#include <stdio.h>

int main()
{
    int n, i, max, ara[100];

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    max = ara[0];

    for(i = 0; i < n; i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }

    printf("Maximum value is = %d", max);

    return 0;
}
