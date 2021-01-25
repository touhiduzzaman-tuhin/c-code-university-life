#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int l;

    gets(ch);

    l = strlen(ch);

    printf("%d\n", l);

    return 0;
}
