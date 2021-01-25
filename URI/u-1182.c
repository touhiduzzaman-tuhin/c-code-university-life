#include <stdio.h>

int main()
{
    double sum = 0.0, M[12][12];
    int i, j, a;
    char ch[2];

    scanf("%d", &a);
    scanf("%s", &ch);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);

            if(j == a){
                sum = sum + M[i][j];
            }
        }
    }

    if(ch[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(ch[0] == 'M'){
        sum = sum / 12.0;
        printf("%.1lf\n", sum);
    }

    return 0;
}
