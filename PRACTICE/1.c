#include <stdio.h>

int count_even(int a, int b)
{
    int i, count = 0;

    for(i = a; i <= b; i++){
        if(i % 2 == 0){
            count++;
        }
    }
    printf("%d\n", count);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    count_even(a, b);

    return 0;
}
