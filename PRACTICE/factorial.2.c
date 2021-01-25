#include <stdio.h>

int main()
{
    int n, i, sum = 1;
    printf("Enter the value : ");
    scanf("%d", &n);

    if(n >= 0  && n <= 12){
        for(i = n; i >= 1; i--){
            sum = sum * i;
        }
    printf(" : is the Factorial\n %d : This is the size", printf("%d",sum));
    }

    else{
        printf("This value not print in c programme in int type\n");
    }


    return 0;
}
