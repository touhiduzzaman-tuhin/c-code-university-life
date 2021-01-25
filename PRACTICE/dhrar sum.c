#include <stdio.h>

int main()
{
    int i, start, dif, finish, sum = 0;

    printf("Enter the start value :");
    scanf("%d", &start);
    printf("Enter the finish value :");
    scanf("%d", &finish);
    printf("Enter the difference value :");
    scanf("%d", &dif);



    for(i = start; i <= finish; i = i + dif){
        printf("%d\n", i);
        //sum = sum + i;
    }
    sum = finish * (finish + 1) / 2;

    printf("sum is : %d\n", sum);

    return 0;
}
