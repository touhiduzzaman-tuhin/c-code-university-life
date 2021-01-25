#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20];

    gets(ch);

    strlwr(ch);

    puts(ch);

    return 0;
}
