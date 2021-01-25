#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30], ch1[30];

    gets(ch);

    strdup(ch);

    if((ch1 == strdup(ch))){
        puts(ch);
    }
    else{
        printf("not posible\n");
    }

    return 0;
}
