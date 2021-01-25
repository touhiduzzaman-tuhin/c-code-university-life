#include <stdio.h>

int main()
{
    int n, i, count;
    int a, b;
    double x, y;

    for(i = 0; i < n; i++){
        count = 0;
        scanf("%d %d %lf %lf", &a, &b, &x, &y);

        while(a <= b)
        {
            a *= (x / 100.0) + 1.0;
            b *= (y / 100.0) + 1.0;

            count++;

            if(count > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if(count <= 100){
            printf("%d anos.\n", count);
        }
    }

    return 0;
}
