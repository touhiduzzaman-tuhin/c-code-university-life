#include <stdio.h>

long fact(x)
{
    int i, sum = 1;

    for(i = 1; i <= x; i++){
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter a integer: \n");
    scanf("%d", &n);

    printf("Factorial value is: %ld\n", fact(n));

    return 0;
}
