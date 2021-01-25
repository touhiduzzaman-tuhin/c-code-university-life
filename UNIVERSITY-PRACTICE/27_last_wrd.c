#include <stdio.h>

#include <string.h>


int main()
{
    char ch[1000], ch1[1000];

    int i, j, c = -1, f;

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


        if(f == 1)
        {
            c = i;
        }
    }

    if(c == -1)
    {
        printf("\n'%s' not found.", ch1);
    }
    else
    {
        printf("\nLast index of '%s' = %d", ch1, c);
    }

    return 0;
}
