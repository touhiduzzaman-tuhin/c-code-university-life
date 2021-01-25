#include<stdio.h>
#include<math.h>

int main()
{
    long n;

    printf("Enter any number : ");
    scanf("%ld", &n);

    printf("Square root of %ld = %ld", n, (long)sqrt(n));

    return 0;
}
