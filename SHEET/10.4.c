#include <stdio.h>

int main()
{
    int n, i, sum = 0, avg, ara[100];

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        sum = sum +ara[i];
    }

    printf("Average is = %d", sum);

    return 0;
}

