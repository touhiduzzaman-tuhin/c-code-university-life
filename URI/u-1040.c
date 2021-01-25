#include <stdio.h>

int main()
{
    double a, b, c, d, e, f, g, h, m, n;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    e = a*2;
    f = b*3;
    g = c*4;
    h = d*1;
    m = (e+f+g+h)/10;
    printf("Media: %.1lf\n", m);

    if(m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(m >= 5){
        printf("Aluno em exame.\n");

        scanf("%lf", &n);
        printf("Nota do exame: %.1lf\n", n);

        if((n+m)/2 > 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", (n+m)/2);
    }

    else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}
