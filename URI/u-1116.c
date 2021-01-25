#include <stdio.h>

int main()
{
    int n, a, b, i;
    double m;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);

        if(b == 0){
            printf("divisao impossivel\n");
        }
        else
        {
            m = a/(b*1.0);
            printf("%.1lf\n", m);
        }
    }

    return 0;
}
