#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30];

    gets(ch);

    strupr(ch);

    puts(ch);

    return 0;
}
