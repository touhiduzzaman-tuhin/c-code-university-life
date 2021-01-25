#include <stdio.h>

int main()
{
    int n, a, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        if(a % 3 == 0){
            printf("%d is divisible by 3\n", a);

            if(a % 7 == 0){
            printf("%d is also divisible by 7\n", a);
            }
        }

        else{
            printf("%d is not divisible by 3\n", a);
        }
    }

    return 0;
}
