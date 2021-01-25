#include <stdio.h>

int main()
{
    int x, y, m = 0, i;

    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++){
        m++;

        if(m == x){
            printf("%d", i);
        }
        else{
            printf("%d ", i);
        }

        if(m == x){
            m = 0;
            printf("\n");
        }
    }

    return 0;
}
