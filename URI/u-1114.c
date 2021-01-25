#include <stdio.h>

int main()
{
    int n = 2002, a;

    while(1)
    {
        scanf("%d", &a);

        if(n == a)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
            continue;
        }
    }

    return 0;
}
