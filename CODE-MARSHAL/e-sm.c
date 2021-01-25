#include <stdio.h>

int main()
{
    int n, a, i, d, count;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        count = 0;
        d = a;
        while(1)
        {
            if(d == 0){
                break;
            }
            else{
               d = a / 2;
                count++;
                a = d;
            }

        }

        printf("%d\n", count);
    }

    return 0;
}
