#include <stdio.h>

int main()
{
    char ch1[30], ch2[30];
    int x;

    gets(ch1);
    gets(ch2);
    x = strcmp(ch1, ch2);

    if(0 != x){
        printf("not equal\n");
    }
    else{
        printf("equal\n");
    }

    return 0;
}
