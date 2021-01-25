#include <stdio.h>

int main()
{
    int a, i, max = 0, position = 0;

    for(i = 1; i <= 100; i++){
        scanf("%d", &a);

        if(max < a){
            max = a;
            position = i;
        }
    }
    printf("%d\n%d\n", max, position);

    return 0;
}
