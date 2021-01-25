#include <stdio.h>

int main()
{
    int n, i, j, c;

    printf("Enter the line : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        c = 1;
        for(j = 1; j <= i; j++){
            printf("%d ", c*(i-j)/j);
        }
        printf("\n");
    }

    return 0;
}
