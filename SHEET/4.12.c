#include<stdio.h>

int main()
{
    int n;

    printf("Enter any year : ");
    scanf("%d", &n);

    if(n % 4 != 0){
        printf("Not leap year");
    }
    else if(n % 100 != 0){
        printf("Leap year");
    }
    else if(n % 400 != 0){
        printf("Not leap year");
    }
    else{
        printf("Leap year");
    }

    return 0;
}
