#include <stdio.h>

int main()
{
    int n, i, ara[100];

    printf("Enter any integer : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
    }
    for(i = 1; i <= n; i++){
        printf("%d ", ara[i]);
    }

    return 0;
}
