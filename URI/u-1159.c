#include <stdio.h>

int main()
{
    int n, i, sum;

    while(1)
    {
        scanf("%d", &n);
        sum = 0;

        if(n == 0)
        {
            break;
        }
        else
        {
            for(i = 1; i <= 5; i++){
                if(n % 2 == 0){
                    sum = sum + n;
                    n = n + 2;
                }
                else{
                    n++;
                    sum = sum + n;
                    n = n + 2;
                }
            }
            printf("%d\n", sum);
        }

        //printf("%d\n", sum);
    }

    return 0;
}
