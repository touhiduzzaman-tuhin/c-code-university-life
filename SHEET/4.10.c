#include<stdio.h>

int main()
{
    int n;

    printf("Enter the mark : ");
    scanf("%d", &n);

    if(n >= 60){
        printf("First division\n");
    }
    else if(n >= 45){
        printf("Second division\n");
    }
    else if(n >= 33){
        printf("Third division\n");
    }
    else{
        printf("Fail\n");
    }

    return 0;
}
