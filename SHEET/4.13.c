#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d;
    float x1, x2, p, q;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0){
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        printf("x1 = %.2f\n x2 = %.2f", x1, x2);
    }
    else if(d == 0){
        x1 = x2 = -b / 2*a;
        printf("x1 = %.2f\n x2 = %.2f", x1, x2);
    }
    else{
        p = -b / 2*a;
        q = sqrt(-d) / 2*a;
        printf("x1 = %.2f + %.2fi \n x2 = %.2f - %.2fi", p, q, p, q);
    }

    return 0;
}
