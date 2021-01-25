#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];

    int a, i;

    gets(ch);

    a = strlen(ch);

    for(i = 0; i < a; i++)
    {

        if(ch[i] == ' ')
        {

        }

        else
        {
            printf("%c", ch[i]);
        }

    }


    return 0;
}
