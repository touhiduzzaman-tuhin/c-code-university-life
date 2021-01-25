#include <stdio.h>

int main()
{
    int n, i, min, ara[100];

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    min = ara[0];

    for(i = 0; i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
    }

    printf("minimum value is = %d", min);

    return 0;
}
