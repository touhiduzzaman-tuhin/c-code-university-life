#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[30];

    gets(ch1);

    strcat(ch1, "sumi");

    puts(ch1);

    return 0;
}
