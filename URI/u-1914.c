#include <stdio.h>

int main()
{
    int n, i;
    char a[1000], x[20], b[1000], y[20];

    long long int k, l, m;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s %s %s %s", a, x, b, y);

        scanf("%ld %ld", &k, &l);

        m = k + l;

        if(x[0] == 'P'){
            if(m % 2 == 0){
                printf("%s\n", a);
            }
            else{
                printf("%s\n", b);
            }
        }
        else {
            if(m % 2 == 0){
                printf("%s\n", b);
            }
            else{
                printf("%s\n", a);
            }
        }
    }

    return 0;
}
