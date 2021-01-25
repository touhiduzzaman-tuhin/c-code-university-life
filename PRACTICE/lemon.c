#include <stdio.h>

int main()
{
    int i, ara[9];

    for(i = 0; i < 9; i++){
        scanf("%d", &ara[i]);
    }
    if((ara[0] && ara[4] && ara[8] % 1 == 0) && (ara[1] && ara[2] && ara[3] && ara[5] && ara[6] && ara[8] == 0)){
        printf("This is a scaler matrix\n");
    }
    else{
        printf("This is a square matrix\n");
    }

    return 0;
}
