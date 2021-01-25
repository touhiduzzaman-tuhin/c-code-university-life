#include <stdio.h>

int main()
{
    int n, count = 0;
    double sum = 0;

    while(1)
    {
        scanf("%d", &n);

        if(n < 0)
        {
            break;
        }
        else
        {
            count++;
            sum = sum + n;
        }
    }

    printf("%.2lf\n", sum/count);

    return 0;
}
