#include <stdio.h>

int main()
{
    char ch[100000];
    int n, i, count_a = 0, count_b = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%c", &ch);
        if(ch == 'A'){
            count_a++;
        }
        else if(ch == 'D'){
            count_b++;
        }
    }

    if(count_a > count_b){
        printf("Anton\n");
    }
    else if(count_a < count_b){
        printf("Danik\n");
    }
    else{
        printf("Friendship\n");
    }

    return 0;
}
