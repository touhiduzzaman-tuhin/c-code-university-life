#include <stdio.h>

int main()
{
    double sum = 0.0, M[12][12];
    int i, j, m = 1, n = 10, x, y;
    char ch[2];

    scanf("%s", &ch);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(x = 0; x < 5; x++){
        for(y = m; y <= n; y++){
             sum = sum + M[x][y];
        }
        m++;
        n--;
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





