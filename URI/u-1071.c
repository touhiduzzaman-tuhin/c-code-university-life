#include <stdio.h>

int main()
{
    int x, y, i, sum = 0, count = 0, b = 0;

    scanf("%d %d", &x, &y);

    if(x > y){
        for(i = y + 1; i < x; i++){
            if(i % 2 == 1 || i % 2 == -1){
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    else if(x < y){
        for(i = x + 1; i < y; i++){
            if(i % 2 == 1 || i % 2 == -1){
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    else if(x == y){
        printf("%d\n", b);
    }

    return 0;
}
