#include <stdio.h>

int main()
{
    int n, i;
    char ch = 'x';

    scanf("%d", &n);

    for(i = 1; i <= 10; i++){
        printf("%d %c %d = %d\n", n, ch, i, n*i);
    }

    return 0;
}
