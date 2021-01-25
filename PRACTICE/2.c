#include <stdio.h>

int value(int a)
{
    int i, n;

    for(i = a; i != 0; i = i / 10){
        if(i/10 == 0){
            n = i;
        }
    }
    printf("%d\n", n);
}

int main()
{
    int a;

    scanf("%d", &a);

    value(a);

    return 0;
}
