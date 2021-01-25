#include <stdio.h>

#include <string.h>


int main()
{
    char ch[1000], ch1[1000];

    int i, j, f, c = 0;

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
            c++;
        }
    }

    printf("%d", c);

    return 0;
}
