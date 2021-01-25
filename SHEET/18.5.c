#include <stdio.h>

int min(int x, int y)
{
    if(x > y){
        return y;
    }
    else{
        return x;
    }
}

int main()
{
    int a, b;
    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d", &b);

    printf("Minimum value is: %d\n", min(a, b));

    return 0;
}
