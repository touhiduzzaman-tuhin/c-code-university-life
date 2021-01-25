#include<stdio.h>

int main()
{
    int n;

    printf("Enter the mark : ");
    scanf("%d", &n);

    if(n >= 80){
        printf(" Grade is A+");
    }
    else if(n >= 70){
        printf("Grade is A");
    }
    else if(n >= 60){
        printf("Grade is A-");
    }
    else if(n >= 50){
        printf("Grade is B");
    }
    else if(n >= 40){
        printf("Grade is C");
    }
    else if(n >= 33){
        printf("Grade is D");
    }
    else{
        printf("Grade is F");
    }

    return 0;
}
