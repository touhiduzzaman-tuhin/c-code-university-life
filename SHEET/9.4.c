#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter any decimal number : ");
    scanf("%d", &n);

    printf("Equivalent binary number is : ");
    for(i = 15; i >= n; i--){
        printf("%d", (n >> 1) & 1);
    }

    return 0;
}
