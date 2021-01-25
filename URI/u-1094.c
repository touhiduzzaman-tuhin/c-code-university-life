#include <stdio.h>

int main()
{
    int n, a, sum = 0, b = 0, c = 0, m = 0, i;
    double x, y, z;
    char ch;
    char k = '%';

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %c", &a, &ch);

        sum = sum + a;

        if(ch == 'C'){
            b = b + a;
        }
        else if(ch == 'R'){
            c = c + a;
        }
        else if(ch == 'S'){
            m = m + a;
        }
    }

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", b);
    printf("Total de ratos: %d\n", c);
    printf("Total de sapos: %d\n", m);

    x = (float)(b * 100) / sum;
    y = (float)(c * 100) / sum;
    z = (float)(m * 100) / sum;

    printf("Percentual de coelhos: %.2lf %c\n", x, k);
    printf("Percentual de ratos: %.2lf %c\n", y, k);
    printf("Percentual de sapos: %.2lf %c\n", z, k);

    return 0;
}
