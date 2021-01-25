#include<stdio.h>

int main()

{
    int a, b, c, min;

    printf("Enter three integer number : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b){
        if(a < c){
            min = a;
        }
        else{
            min = c;
        }
    }
    else{
        if(b < c){
            min = b;
        }
        else{
            min = c;
        }
    }
    printf("Minimum value is %d", min);

    return 0;
}
