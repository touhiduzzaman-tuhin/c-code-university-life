#include <stdio.h>

int main()
{
    int n, a, b, d, i, j, sum, count;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        sum = 0;
        for(j = 1; j <= a; j++){
            scanf("%d", &b);
            sum = sum + b;
        }
        while(1)
        {
            count = 0;
            d = sum;
            if(d == 0){
                break;
            }
            else{
                d = sum / 2;
                count++;
                sum = d;
            }
        }
        printf("Case %d: %d\n", i, count);
    }

    return 0;
}
