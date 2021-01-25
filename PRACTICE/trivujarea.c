#include <stdio.h>

int main()
{

    int area, x1, x2, y1, y2, x3, y3, m, n, o, i, j, k, b, c;
    printf("Enter the value of a\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of b\n");
    scanf("%d %d", &x2, &y2);
    printf("Enter the value of c\n");
    scanf("%d %d", &x3, &y3);

    m = (x1*y2);
    n = (x2*y3);
    o = (x3*y1);
    i = (y1*x2);
    j = (y2*x3);
    k = (y3*x1);

    b = (m + n + o);
    c = (i + j + k);

    area = 0.5 * (b - c);

    if( area < 0){
        printf("Area is negative and that is %d\n", area);
        printf("So area is : %d\n", area - 2*area);
    }
    else{
        printf("Area is : % d\n", area);
    }

    return o;
}
