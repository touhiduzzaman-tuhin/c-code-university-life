#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30];

    gets(ch);

    strrev(ch);

    puts(ch);

    return 0;
}
