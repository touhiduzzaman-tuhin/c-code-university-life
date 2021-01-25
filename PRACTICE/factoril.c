#include <stdio.h>

int main()
{
    int n, i, sum = 1;
    printf("Enter the value : ");
    scanf("%d", &n);

    if(n >= 0  && n <= 12){
        for(i = n; i > 0; i--){
            sum = sum * i;
        }
    printf("Factorial is : %d\n", sum);
    }

    else if(n <= 0 && n >= -12){
        for(i = n;  i < 0; i--){
            sum = sum * i;
        }
    printf("Factorial is : \n", sum);
    }

    else{
        printf("This is not posible in c programme");
        }


    return 0;
}
