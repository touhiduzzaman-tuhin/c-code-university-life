#include <stdio.h>

int main()
{
    double i, j;

    for(i = 0; i <= 0; i++){
        for(j = 1; j <= 3; j++){
            printf("I=%.0lf J=%.0lf\n", i, j);
        }
    }

    for(i = 0.2; i <= 0.8; i = i + .2){
        for(j = 1; j <= 3; j++){
            printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
    }

    for(i = 1; i <= 1; i++){
        for(j = 2; j <= 4; j++){
            printf("I=%.0lf J=%.0lf\n", i, j);
        }
    }

    for(i = 1.2; i <= 1.8; i = i + .2){
        for(j = 1; j <= 3; j++){
            printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
    }

    for(i = 2; i <= 2; i++){
        for(j = 3; j <= 5; j++){
            printf("I=%.0lf J=%.0lf\n", i, j);
        }
    }

    return 0;
}
