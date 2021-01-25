#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[100];

    int l, l1, i, j, c = 0;

    printf("Enter your string: ");

    gets(ch);

    printf("Enter the word: ");

    scanf("%s", &ch1);

    l = strlen(ch);
    l1 = strlen(ch1);

    for(i = 0; i < l; i++)
    {
        c = 1;

        for(j = 0; j < l1; j++)
        {
            if(ch[i+j] != ch1[j])
            {
                c = 0;
                break;
            }
        }

        if(c == 1)
        {
            for(j = i; j <= l-l1; j++)
            {
                ch1[j] = ch[j + l1];
            }

            break;
        }
    }

    printf("\nString after removing '%s': \n%s", ch1, ch);

    return 0;
}
