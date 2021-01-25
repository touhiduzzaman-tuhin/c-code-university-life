#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter how many line : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + i*(2*i-1)*(2*i-1);
    }

    printf("sum is = %d", sum);

    return 0;
}
