#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, l;

    printf("Enter a string: \n");
    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++){
        printf("%c\n", ch[i]);
    }

    return 0;
}
