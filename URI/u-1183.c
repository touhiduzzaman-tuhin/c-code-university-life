#include <stdio.h>

int main()
{
    double sum = 0.0, M[12][12];
    int i, j;
    char ch[2];

    scanf("%s", &ch);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);

            if(i < j){
                sum = sum + M[i][j];
            }
        }
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

