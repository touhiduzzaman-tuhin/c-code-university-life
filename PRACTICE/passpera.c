#include <stdio.h>

int sum_of_all(int n)
{
    int sum = 0, i;

    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("Sum of all are 1 to %d = %d\n", n, sum);
}

int main()
{
    sum_of_all(200);

    return 0;
}
