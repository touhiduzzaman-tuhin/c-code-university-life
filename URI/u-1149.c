#include <stdio.h>

int main()
{
    int a, b, m = 0, i;

    scanf("%d %d", &a, &b);

    while(b <= 0){
        scanf("%d", &b);
    }

    for(i = 1; i <= b; i++){
        m = m + a;
        a++;
    }

    printf("%d\n", m);

    return 0;
}
