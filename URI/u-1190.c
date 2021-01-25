#include <stdio.h>

int main()
{
    double sum = 0.0, M[12][12];
    int i, j, m = 11, n = 7, x, y;
    char ch[2];

    scanf("%s", &ch);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(x = 1; x < 11; x++){

        if(x <= 5){
            for(y = m; y <= 11; y++){
                sum = sum + M[x][y];
            }
            m--;
        }

        else if(x >= 6){
            for(y = n; y <= 11; y++){
                sum = sum + M[x][y];
            }
            n++;
        }

    }

    if(ch[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(ch[0] == 'M'){
        sum = sum / 30.0;
        printf("%.1lf\n", sum);
    }

    return 0;
}







