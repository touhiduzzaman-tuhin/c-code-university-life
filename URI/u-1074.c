#include <stdio.h>

int main()
{
    int n, i, a;

    scanf("%d", &n);

    for(i = 1; i<= n; i++){
        scanf("%d", &a);

        if(a > 0){
            if(a % 2 == 0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        else if(a < 0){
            if(a % 2 == 0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
        else{
            printf("NULL\n");
        }
    }

    return 0;
}
