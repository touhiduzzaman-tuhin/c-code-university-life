#include <stdio.h>

int main()
{
    int n, i, j, matrix[5][5];
    printf("Matrix size ?\n");
    scanf("%d", &n);

    printf("Enter Matrix elements....\n");
    for(i = 0; i <= n; i++){
        for(j = 0; j <= n; j++){
            printf("Element[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("Given Matrix is....\n");
    for(i = 0; i <= n; i++){
        for(j = 0; j <= n; j++){
            printf("%d", matrix[i][j);
        }
        printf("\n");
    }


    return 0;
}
