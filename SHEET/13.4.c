#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, l;

    printf("Enter a string: \n");
    gets(ch);

    l = strlen(ch);

    for(i = l-1; i >= 0; i--){
        printf("%c ", ch[i]);
    }

    return 0;
}
