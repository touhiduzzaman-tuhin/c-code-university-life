#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a < b){
        printf("Too old, you are!\n");
    }
    else{
        printf("Become a Jedi, you will!\n");
    }

    return 0;
}
