#include <stdio.h>

int main()
{
    int ara[100], i, n, max, min, sum = 0;

    printf("Enter any integer : ");
    scanf("%d", &n);

    printf("\nEnter %d integer : \n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    max = ara[0];
    min = ara[0];
    for(i = 0; i < n; i++){
        sum = sum + ara[i];
        if(max < ara[i]){
            max = ara[i];
        }

        if(min > ara[i]){
            min = ara[i];
        }
    }

    printf("\nMaximum = %d\nMinimum = %d\nAverage = %.2lf\n", max, min, (float)sum/n);

    return 0;
}
