#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the line : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", i % 2);
        }
        printf("\n");
    }

    return 0;
}
