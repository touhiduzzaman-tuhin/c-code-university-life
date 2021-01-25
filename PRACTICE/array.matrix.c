#include <stdio.h>

int main()
{
    int n, row, col, sum_above = 0, sum_below = 0, matrix[5][5];

    printf("\n Matrix size ");
    scanf("%d", &n);

    printf("\n Enter Matrix Element. .\n");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            printf("        Element[%d][%d] : ", row,col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("\n Given Matrix is :\n");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            printf(" %d ", matrix[row][col]);
        }
    printf("\n");
    }

    printf("\n Diagonal Matrix Are :\t");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            if(row == col){
                printf("%d ", matrix[row][col]);
            }
        }
    }

    printf("\n Elements above the main diagonal :\t");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            if(row < col){
                printf("%d ", matrix[row][col]);
                sum_above = sum_above + matrix[row][col];
            }
        }
    }

    printf("\n Elements below the main diagonal :\t");

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            if(row > col){
                printf("%d ", matrix[row][col]);
                sum_below = sum_below + matrix[row][col];
            }
        }
    }

    printf("\n sum of the elements above the main diagonal : %d\n", sum_above);

    printf("\t\t below the main diagonal : %d\n", sum_below);

    return 0;
}
