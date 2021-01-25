#include <stdio.h>

int main()
{
    double sum = 0.0, M[12][12];
    int i, j, t = 10, x, y;
    char ch[2];

    scanf("%s", &ch);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(x = 0; x < 11; x++){
        for(y = 0; y <= t; y++){
             sum = sum + M[x][y];
        }
        t--;
    }

    if(ch[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(ch[0] == 'M'){
        sum = sum / 66.0;
        printf("%.1lf\n", sum);
    }

    return 0;
}



