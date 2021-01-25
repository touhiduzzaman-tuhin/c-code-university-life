#include <stdio.h>

int main()
{
    char ch[1000];
    int i, count = 0;

    gets(ch);

    for(i = 0; ch[i] != '\0'; i++){
        count++;
    }

    printf("%d\n", count);

    return 0;
}
