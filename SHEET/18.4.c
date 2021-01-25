#include <stdio.h>

int max(int x, int y)
{
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    int a, b;

    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d", &b);

    printf("Maximum value is: %d\n", max(a, b));

    return 0;
}
