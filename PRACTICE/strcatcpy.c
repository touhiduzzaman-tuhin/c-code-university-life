#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[20];
    char ch2[20];
    gets(ch1);
    gets(ch2);
    strcpy(ch1+6, ch2+4);
    strcat(ch1, "!! !! !!!");
    puts(ch1);

    return 0;
}
