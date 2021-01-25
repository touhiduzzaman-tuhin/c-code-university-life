#include <stdio.h>

#include <string.h>


int main()
{
    char ch[1000], ch1[1000];

    int i, j, f;

    int l, l1;


    printf("Enter any string: ");

    gets(ch);

    printf("Enter any word to search: ");

    gets(ch1);

    l  = strlen(ch);

    l1 = strlen(ch1);

    for(i = 0; i <= l - l1; i++)
    {

        f = 1;

        for(j = 0; j < l1; j++)
        {

            if(ch[i + j] != ch1[j])
            {
                f = 0;
                break;
            }
        }

        if(ch[i + j] != ' ' && ch[i + j] != '\t' && ch[i + j] != '\n' && ch[i + j] != '\0')
        {
            f = 0;
        }

        if(f == 1)
        {
            for(j = i; j <= l - l1; j++)
            {
                ch[j] = ch[j + l1];
            }

            l = l - l1;

            i--;
        }
    }

    puts(ch);

    return 0;
}
