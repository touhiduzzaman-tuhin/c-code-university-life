#include <stdio.h>

int main()
{
    int a, b, result;
    char sign;

    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter another value: ");
    scanf("%d", &b);

    result = a + b;
    sign = '+';
    printf("%d %c %d = %d\n", a, sign, b, result);
    result = a - b;
    sign = '-';
    printf("%d %c %d = %d\n", a, sign, b, result);
    result = a * b;
    sign = '*';
    printf("%d %c %d = %d\n", a, sign, b, result);

    if(b == 0){
        printf("Math error\n");
    }
    else{
         result = a / b;
    sign = '/';
    printf("%d %c %d = %d\n", a, sign, b, result);

    }

    return 0;
}
