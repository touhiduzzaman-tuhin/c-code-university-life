#include <stdio.h>

int main()
{
    int n, a, b, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);

        if(i % 2 != 0){
            printf("%d\n", b);
        }
        else{
            printf("%d\n", a);
        }
    }

    return 0;
}
