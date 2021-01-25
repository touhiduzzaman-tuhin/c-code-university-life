#include <stdio.h>

int main()
{
    int n, row, col, matrix[6][6];

    printf("\n Matrix size ");
    scanf("%d", &n);

    printf("\n Enter matrix Elements. .\n");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            printf("        Element[%d][%d] : ", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("\n Given Matrix is : \n");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    row = 1;
    while(n > 0){
        for(col = row; col < n + 1; col++){
            printf("%d", matrix[row][col]);
        }
    }

    return 0;
}
