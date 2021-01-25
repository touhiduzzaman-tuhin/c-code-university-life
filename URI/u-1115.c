#include <stdio.h>

int main()
{
    int a, b;

    while(1)
    {
        scanf("%d %d", &a, &b);

        if(a == 0 || b == 0){
            break;
        }
        else
        {
            if(a >= 0 &&  b >= 0){
                printf("primeiro\n");
                continue;
            }
            else if(a >= 0 && b <= 0){
                printf("quarto\n");
                continue;
            }
            else if(a <= 0 && b <= 0){
                printf("terceiro\n");
                continue;
            }
            else if(a <= 0 && b >= 0){
                printf("segundo\n");
                continue;
            }
        }
    }

    return 0;
}
