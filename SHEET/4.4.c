#include<stdio.h>

int main()
{
    int a, b, min;

    printf("Enter two integer number : ");
    scanf("%d %d", &a, &b);

    if(a < b){
        min = a;
    }
    else{
        min = b;
    }
    printf("Minimum value is %d", min);

    return 0;
}
