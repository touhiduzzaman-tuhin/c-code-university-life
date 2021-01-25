#include <stdio.h>
#include <string.h>

int main()
{
    int l;
    char ch[1000];

    printf("Enter a string: \n");
    gets(ch);

    l = strlen(ch);

    printf("The string length is: %d\n", l);

    return 0;
}
