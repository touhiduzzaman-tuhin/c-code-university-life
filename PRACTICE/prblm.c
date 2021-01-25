#include <stdio.h>

int main()
{
    int i, j;
    char ch = 'X';

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 10; j++){
            printf("%d %c %d = %d\n", i, ch, j, i*j);
        }

        printf("\n");
    }

    return 0;
}
