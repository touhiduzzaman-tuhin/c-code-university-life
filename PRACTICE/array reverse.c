#include <stdio.h>

int main()
{
    int row, col, n, matrix[10][10];

    printf("array size : ");
    scanf("%d", &n);

    printf("Matrix element : \n");

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            printf("Element[%d][%d] : ", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("Given Matrix is : \n");

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            printf("%4d", matrix[row][col]);
        }
        printf("\n");
    }

    printf("Traverse matrix is : ");

    row = 1;
    while(n > 0){
        for(col = row; col <= n; col++){
            printf("%d ", matrix[row][col]);
        }
        for(col = row+1; col <= n; col++){
            printf("%d ", matrix[col][n]);
        }
        for(col = n-1; col > row-1; col--){
            printf("%d ", matrix[n][col]);
        }
        for(col = n-1; col > row; col--){
            printf("%d ", matrix[col][row]);
        }
        row++;
        n--;
    }

    return 0;
}
