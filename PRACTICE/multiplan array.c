#include <stdio.h>
#define Row 2
#define Col 2

int main()
{
    int a[Row][Col] = {1,2,3,4};
    int b[Row][Col] = {5,6,7,8};
    int c[Row][Col], i, j, k, sum;

    printf("Matrix A is: \n\t\t");
    for(i = 0; i < Row; i++){
        for(j = 0; j < Col; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n\t\t");

    }

    printf("\nMatrix B is: \n\t\t");
    for(i = 0; i < Row; i++){
        for(j = 0; j < Col; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n\t\t");

    }

    printf("\nMultiplication of A and B is: \n\t\t");
     for(i = 0; i < Row; i++){
        for(j = 0; j < Col; j++){
            sum = 0;
            for(k = 0; k < Row; k++){
                sum = sum + a[i][j] * b[i][j];
                c[i][j] = sum;
                printf("%d\t", c[i][j]);
            }
        }
     }



    return 0;
}
