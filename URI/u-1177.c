#include <stdio.h>

int main()
{
    int x, i, z, ara[1000];

    scanf("%d", &x);

    for(i = 0, z = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, z);
        z++;
        if(z == x){
            z = 0;
        }
    }

    return 0;
}
