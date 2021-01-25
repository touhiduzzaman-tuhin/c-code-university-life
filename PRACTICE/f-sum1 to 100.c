#include <stdio.h>

void sum_of_all(void)
{
    int sum = 0;
    int i;

    for(i = 1; i <= 100; i++){
        sum = sum + i;
    }
    printf("sum of all is : %d\n", sum);
}

void main()
{
    sum_of_all();
}
