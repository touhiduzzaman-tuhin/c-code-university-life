#include<stdio.h>

#include<string.h>

int main()
{
    char ch[10000], ch1[10000];

    int l, l1, i, j, c = -1, f, m = 0;

    printf("Enter a String: ");

    gets(ch);

    printf("Enter a word: ");

    gets(ch1);

    l = strlen(ch);

    l1 = strlen(ch1);

    for(i = 0; i <= l-l1; i++)
    {
        f = 1;

        for(j = 0; j < l1; j++)
        {
            if(ch[i+j] != ch1[j])
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

    for(j = c; j <= l-l1; j++)
            {
                ch[j] = ch[j+l1];
            }


    puts(ch);

    return 0;
}
