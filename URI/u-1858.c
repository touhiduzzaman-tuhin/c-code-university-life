#include <stdio.h>

int main()
{

    int i, n, min = 0, m = 1;

    scanf("%d", &n);

    int ara[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    min = ara[0];

    for(i = 0; i < n; i++){
        if(min > ara[i]){
            min = ara[i];
            m = i + 1;
        }
    }

    printf("%d\n", m);

    return 0;
}
