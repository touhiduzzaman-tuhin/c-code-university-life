#include <stdio.h>

int rev(int a)
{
    int r = 0;
    while(a > 0){
       r = (r*10) + a%10;
       a = a / 10;
    }
    return r;
}

int main()
{
    int n;
    printf("Enter a integer: \n");
    scanf("%d", &n);

    printf("Reverse integer is: %d\n", rev(n));

    return 0;
}
