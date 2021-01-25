#include <stdio.h>

int main()
{
    int n, i, j, a = 0, b = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &j);
        if(j > 0){
            a++;
        }
        else{
            b++;
        }
    }
    printf("%d %d", a, b);

    return 0;
}
