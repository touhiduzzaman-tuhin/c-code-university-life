#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter two integer number : ");
    scanf("%d %d", &a, &b);

    if(a < b){
        printf("Minimum value is %d", a);
    }
    else{
        printf("Minimum value is %d", b);
    }

    return 0;
}
