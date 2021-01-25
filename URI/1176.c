#include <stdio.h>

int main()
{
    long long int n, first = 0, second = 1, next, c;

    int i, a;

    scanf("%d", &a);

    for(i = 0; i < a; i++, first = 0, second = 1){
        scanf("%lld", &n);

        n = n + 1;

        for(c = 0; c < n; c++){
            if(c <= 1){
                next = c;
            }
            else{
                next = first + second;
                first = second;
                second = next;
            }
        }

        printf("Fib(%lld) = %lld\n", n-1, next);
    }

    return 0;
}
