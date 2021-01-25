#include <stdio.h>

int main()
{
    int n, a, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        if(a >= 80 && a <=100){
            printf("A+\n");
        }
        else if(a >= 70 && a <= 79){
            printf("A\n");
        }
        else if(a >= 60 && a <= 69){
            printf("B\n");
        }
        else if(a >= 50 && a <= 59){
            printf("C\n");
        }
        else if(a >= 40 && a <= 49){
            printf("D\n");
        }
        else if(a >= 0 && a <= 39){
            printf("F\n");
        }
    }

    return 0;
}
