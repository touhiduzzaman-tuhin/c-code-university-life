#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, i, d;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        d = sqrt(a);
        if(a == d*d){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
