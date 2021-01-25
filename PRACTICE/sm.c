#include <stdio.h>

int main()
{
    int n, a, i, d;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        d = a/2;
        if(a == 2*d){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }

    return 0;
}

