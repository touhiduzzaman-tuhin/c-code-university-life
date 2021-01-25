#include <stdio.h>

int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);

    if(n % 3 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    if(n % 5 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");

    }


    return 0;
}
