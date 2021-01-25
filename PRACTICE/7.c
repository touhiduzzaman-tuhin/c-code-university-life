#include <stdio.h>

int main()
{
    char str[1000];
    int i, count = 0, temp;

    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        count++;
    }
    for(i = 0; i <= count/2; i++){
        temp = str[i];
        str[i] = str[count-1-i];
        str[count-1-i] = temp;
    }
    puts(str);

    return 0;
}
