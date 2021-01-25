#include <stdio.h>

int main()
{
    int a, i, n, max = 0;

    while(scanf("%d", &n) != EOF)
    {

        for(i = 0, max = 0; i < n; i++){
            scanf("%d", &a);

            if(max < a){
                max = a;
            }
        }

        if(max < 10){
            printf("1\n");
        }
        else if(max < 20){
            printf("2\n");
        }
        else{
            printf("3\n");
        }

    }

    return 0;
}
