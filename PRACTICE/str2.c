#include <stdio.h>

int main()
{
    char ch[10] = "Tuhin";
    char i;

    for(i = ch; (i = ch) != '\0'; i++){
        puts(i);
    }

    return 0;
}
