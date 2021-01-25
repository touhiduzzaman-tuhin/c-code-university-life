#include <stdio.h>

int main()
{
    int T, N, i;
    scanf("%d", &T);

    if(T > 1 && T < 100){
        for(i = 1; i <= T; i++){
            scanf("%d", &N);
        }
    }

    if(N > 1 && N < 1000){
        if(N % 3 == 0){
            printf("%d is divisible by 3\n", N);
        }
        else{
            printf("%d is not divisible by 3\n", N);
        }
        if(N % 7 == 0){
            printf("%d is also divisible by 7\n", N);
        }
    }

    return 0;
}
