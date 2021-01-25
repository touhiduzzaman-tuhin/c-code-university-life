#include<stdio.h>

int main()
{
    int n;

    printf("Enter the mark : ");
    scanf("%d", &n);

    if(n >= 33){
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }

    return 0;
}
