#include <stdio.h>

int main()
{
    int i, j, k, a = 7;

    for(i = 1; i <= 9; i = i + 2){
        for(k = 1, j = a; k <= 3;j--, k++)
            printf("I=%d J=%d\n", i, j);
            a = a + 2;

        }

    return 0;
}
