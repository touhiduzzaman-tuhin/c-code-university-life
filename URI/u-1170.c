#include <stdio.h>

int main(){
    int n, dias, i;
    double x;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
            scanf("%lf", &x);
            dias = 0;
            while(x > 1){
                    x /= 2;
                    dias++;
            }
            printf("%d dias\n", dias);
    }

    return 0;
}

