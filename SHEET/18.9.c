#include <stdio.h>

int min(int x, int y, int z)
{
    if(x < y){
        if(x < z){
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if(y < z){
            return y;
        }
        else{
            return z;
        }
    }
}

int main()
{
    int a, b, c;

    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d", &b);
    printf("Enter third integer: \n");
    scanf("%d", &c);

    printf("Minimum value is: %d", min(a, b, c));

    return 0;
}
