#include <stdio.h>

int main()
{
    double sum = 0, c, b = 1;
    int i;

    for(i = 1; i <= 39; i = i + 2){
        c = i/b;
        sum = sum + c;
        b = b * 2;
    }

    printf("%.2lf\n", sum);

    return 0;
}
