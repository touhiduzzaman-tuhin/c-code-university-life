#include <stdio.h>

int main()
{
    int n;
    char gd;
    printf("Enter the result: ");
    scanf("%d", &n);


    if(n >= 80 && n <= 100){
        gd = '+';
        printf("grade is: %c\n", gd);
    }
    else if(n >= 70 && n <= 80){
        gd = 'A';
        printf("grade is: %c\n", gd);
    }
    else if(n >= 60 && n <= 70){
        gd = 'B';
        printf("grade is: %c\n", gd);
    }
    else if(n >= 50 && n <= 60){
        gd = 'C';
        printf("grade is: %c\n", gd);
    }
    else if(n >= 40 && n <= 50){
        gd = 'D';
        printf("grade is: %c\n", gd);

    }
    else{
            printf("grade is: F\n");
        }

    return 0;
}
