#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter how many line : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + (3*i-1)*(3*i+2)*(3*i+5);
    }

    printf("sum is = %d", sum);

    return 0;
}
