#include <stdio.h>

int find_max(int ara[11], int n);

int main()
{
    int ara[11] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int max, n = 10;

    max = find_max(ara, n);

    printf("%d\n", max);

    return 0;

}

int find_max(int ara[11], int n)
{
    int max = ara[0];
    int i;
    for(i = 1; i <= n; i++){
        if(max < ara[i]){
            max = ara[i];
        }
    }
    return max;
}
