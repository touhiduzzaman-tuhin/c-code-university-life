#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[30];
    int l;
    gets(ch1);
    l = strlen(ch1);
    printf("%d", l);

    return 0;
}
