#include <stdio.h>

int main()
{
    int n, i, sum = 0, ara[100];

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
        sum = sum + ara[i];
    }

    printf("sum is = %d", sum);

    return 0;
}
