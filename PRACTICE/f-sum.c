#include <stdio.h>

int find_sum(int ara[11], int n);

int main()
{
    int ara[11] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int sum, n = 11;

    sum = find_sum(ara, n);

    printf("%d\n", sum);

    return 0;

}

int find_sum(int ara[11], int n)
{
    int sum = 0;
    int i;
    for(i = 1; i <= n; i++)
        sum = sum + ara[i];
    }

    return sum;
}

