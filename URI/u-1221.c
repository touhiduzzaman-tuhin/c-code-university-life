#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, flag, n, j, b;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        flag = 0;
        scanf("%d", &a);

        b = sqrt(a);

        for(j = 2; j <= b; j++){
            if(a % j == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }

    return 0;
}

