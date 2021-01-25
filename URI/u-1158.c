#include <stdio.h>

int main()
{
    int x, y, i, n, sum, j;

    scanf("%d", &n);

    for(j = 1; j <= n; j++)
    {
        scanf("%d %d", &x, &y);

        if(x % 2 == 1){
            sum = 0;
            for(i = 1; i  <= y; i++){
                sum = sum + x;
                x = x + 2;
            }
            printf("%d\n", sum);
        }
        else
        {
            x++;
            sum = 0;
            for(i = 1; i <= y; i++){
                sum = sum + x;
                x = x + 2;
            }
            printf("%d\n", sum);
        }

    }

    return 0;
}
