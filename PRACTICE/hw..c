#include <stdio.h>

int main()
{
    int ara[10], i;

    printf("Enter 10 integer number : ");

    for(i = 0; i < 10; i++){
        scanf("%d", &ara[i]);
    }
    for(i = 9; i >= 0; i--){
        printf("%d\n", ara[i]);
    }
    return 0;
}
