#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n >= -100 && n <= 100){
        printf("%d\n", n);
    }
    if(n < 0){
        printf("Negative\n");
    }

    return 0;
}
