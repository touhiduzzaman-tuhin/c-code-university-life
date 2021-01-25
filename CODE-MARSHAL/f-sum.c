#include <stdio.h>

int main()
{
    int n, d, count = 0;

    scanf("%d", &n);

    while(1)
    {
        if(n == 1){
            break;
        }
        else{
            d = n / 2;
            count++;
        }
        n = d;
    }

    if(count % 2 == 0){
        printf("Chicken First!\n");
    }
    else{
        printf("Egg First!\n");
    }

    return 0;
}
