#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, t, m, n;

    scanf("%lf %lf %lf", &a, &b, &c);

    t = (b*b) - (4*a*c);
    m = (-b + sqrt(t)) / (2*a);
    n = (-b - sqrt(t)) / (2*a);


    if(a != 0 && t > 0){
        printf("R1 = %.5lf\nR2 = %.5lf\n", m, n);
    }
    else{
        printf("Impossivel calcular\n");
    }


    return 0;
}
