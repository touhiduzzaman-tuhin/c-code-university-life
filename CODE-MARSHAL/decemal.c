#include <stdio.h>
#include <math.h>

int main()
{
    int i, a, b, s = 0;

    scanf("%d", &a);

    for(i = 0; a > 0; i++){
        b = a % 10;
        s = s + b*pow(2,i);
        a = a / 10;
    }
    printf("%d\n", s);

    return 0;
}
