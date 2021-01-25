#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter any positive integer : ");
    scanf("%d", &n);

    while(n > 0){
        sum = sum + n%10;
        n = n / 10;
    }

    printf("sum of digits = %d", sum);


    return 0;
}
