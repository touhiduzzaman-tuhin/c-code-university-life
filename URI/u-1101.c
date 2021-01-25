#include <stdio.h>

int main()
{
    int n, i, j, a = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = a; j <= a + 2; j++){
            printf("%d ", j);
        }
        printf("PUM\n");
        a = a + 4;
    }

    return 0;
}
