#include <stdio.h>

int mid(int x, int y, int z)
{
    if(x > y){
        if(x > z){
            if(y > z){
                return y;
            }
            else{
                return z;
            }
        }
        else{
            return x;
        }

    }
    else{
        if(y > z){
            if(x > z){
                return x;
            }
            else{
                return z;
            }
        }
        else{
            return y;
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

    printf("Medium value is: %d\n", mid(a, b, c));

    return 0;
}
