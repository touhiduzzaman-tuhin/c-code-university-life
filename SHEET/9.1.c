#include <stdio.h>

int main()
{
    int n, i;
    long fac = 1;

    printf("Enter any positive integer : ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--){
        fac = fac * i;
    }

    printf("Factorial %d is = %ld", n, fac);

    return 0;
}
