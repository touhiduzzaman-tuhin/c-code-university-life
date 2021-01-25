#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];

    printf("Enter a string: \n");
    gets(ch);

    strlwr(ch);

    printf("The string is: \n");
    puts(ch);

    return 0;
}
