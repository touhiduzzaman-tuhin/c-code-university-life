#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n < 0){
        printf("%d\nNegative\n", n);
    }
    else{
        printf("%d\n", n);
    }

    return 0;
}
