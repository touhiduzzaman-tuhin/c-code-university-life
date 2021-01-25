#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter any two integer number : ");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("Maximum value is %d", a);
    }
    else{
        printf("Maximum value is %d", b);
    }

    return 0;
}
