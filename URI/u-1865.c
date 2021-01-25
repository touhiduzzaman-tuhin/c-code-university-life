#include <stdio.h>

int main()
{
    int n, i, a;
    char ch[1000];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", ch);
        scanf("%d", &a);

        if(ch[0] == 'T' && ch[1] == 'h' && ch[2] == 'o' && ch[3] == 'r'){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}
