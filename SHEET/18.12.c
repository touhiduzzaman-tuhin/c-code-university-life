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

int main()
{
    int n;

    printf("Enter a integer: \n");
    scanf("%d", &n);

    printf("Digital sum is: %d\n", sum(n));

    return 0;
}
