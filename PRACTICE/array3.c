#include <stdio.h>

int ara(int array[][10], int n);

int main()
{
    int sama[1][10] = {1,2,3,4,5,6,7,8,9,10};

    int sumi[2][10] = { {11,12,13,14,15,16,17,18,19,20},
                        {21,22,23,24,25,26,27,28,29,30}
                        };
    int rana[3][10] ={  {1,2,3,4,5,6,7,8,9,10},
                        {21,22,23,24,25,25,26,27,28,29,30},
                        {31,32,33,34,35,36,37,38,39,40}
                        };

    printf("\n Element of sama array.....\n\n");
    ara(sama, 1);
    printf("\n Element of sumi array.....\n\n");
    ara(sumi, 2);
    printf("\n Element of rana array.....\n\n");
    ara(rana, 3);

    return 0;
}

int ara(int array[][10], int n)
{
    int x, y;
    for(x = 0; x < n; x++){
        for(y = 0; y <10; y++){
            printf("%d ", array[x][y]);
        //printf("\n");
        }
    }
}
