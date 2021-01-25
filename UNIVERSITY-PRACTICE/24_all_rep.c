#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1, ch2;

    int i, l;

    printf("Enter strings: ");

    gets(ch);

    printf("Enter character: ");

    scanf("%c", &ch1);

    getchar();

    printf("Enter a character: ");

    scanf("%c", &ch2);

    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        if(ch[i] == ch1)
        {
            ch[i] = ch2;

        }
    }

    printf("%s", ch);

    return 0;
}
