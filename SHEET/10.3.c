#include <stdio.h>

int main()
{
    int n, i, sum = 0, avg, ara[100];

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
        sum = sum + ara[i];
    }

    avg = sum / n;

    printf("Average is = %d", avg);

    return 0;
}
