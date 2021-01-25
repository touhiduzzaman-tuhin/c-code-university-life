#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter how many number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i = i + 1){
        sum = sum + 2*i;
    }

    printf("sum = %d", sum);

    return 0;
}
