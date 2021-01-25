#include <stdio.h>
#define Row 3
#define Col 5

int main()
{
    int row, col;
    float array[Row][Col] = {   {1.0,2.0,3.0,4.0,5.0},
                                {6.0,7.0,8.0,9.0,10.0},
                                {11.0,12.0,13.0,14.0,15.0}
                            };

    for(row = 1; row <= Row; row++){
        for(col = 1; col <= Col; col++){
            printf("Element [%d][%d] = %.2f\n", row, col, array[row][col]);
        }
    }

    return 0;
}
