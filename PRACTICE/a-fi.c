#include <stdio.h>

int getsum(int n)
{
    if(n == 1){
        return 1;
    }
    return n + getsum(n-1);
}

int main()
{
    printf("%d\n", getsum(6));

    return 0;
}
