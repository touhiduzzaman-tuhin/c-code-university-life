#include <stdio.h>

int main()
{
    char str[50] = "Tuhin is a  good boy";

    int i;

    for(i = 0; str[i] != '\0'; i++){
        putchar(str[i]);
    }

    //printf("%s", str);

    return 0;
}
