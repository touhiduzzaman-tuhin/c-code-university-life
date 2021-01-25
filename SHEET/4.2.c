#include<stdio.h>

int main()
{
    int a, b, max;

    printf("Enter any two integer number : ");
    scanf("%d %d", &a, &b);

    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    printf("Maximum value is %d", max);


    return 0;
}
