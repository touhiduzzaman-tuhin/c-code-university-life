#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n % 4 != 0){
        printf("NO\n");
    }
    else if(n % 100 != 0){
        printf("YES\n");
    }
    else if(n % 400 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}
