#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, m, n, k;

    while(1)
    {
        scanf("%d %d", &m, &n);

        if(m > n){
            a++;
        }
        else if(m < n){
            b++;
        }
        else if(m == n){
            c++;
        }

        x = x + m;
        y = y + n;
        z++;

        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%d", &k);

        if(k == 1){
            continue;
        }
        else if(k == 2){
            break;
        }
    }

    printf("%d grenais\n", z);

    printf("Inter:%d\n", a);

    printf("Gremio:%d\n", b);

    printf("Empates:%d\n", c);

    if(a > b){
        printf("Inter venceu mais\n");
    }

    else if(a < b){
        printf("Gremio venceu mais\n");
    }

    else if(a == b){
        printf("Nao houve vencedor\n");
    }

    return 0;
}
