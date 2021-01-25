#include <stdio.h>

int sum(int a)
{
    int s = 0;
    while(a > 0){
        s = s + a%10;
        a = a / 10;
    }
    return s;
}

int root(int b)
{
    while(b > 9){
        b = sum(b);
    }
    return b;
}

int main()
{
    int n;

    printf("Enter a integer: \n");
    scanf("%d", &n);

    printf("Digital root is: %d",root(n));

    return 0;
}
