#include <stdio.h>

int main()
{
    int n, x = 0, y = 0, z = 0;

    while(1)
    {
        scanf("%d", &n);

        if(n == 4){
            break;
        }
        else{
            if(n == 1){
               x++;
            }
            else if(n == 2){
                y++;
            }
            else if(n == 3){
                z++;
            }
            else{
                continue;
            }
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", x);
    printf("Gasolina: %d\n", y);
    printf("Diesel: %d\n", z);

    return 0;
}
