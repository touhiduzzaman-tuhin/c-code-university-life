#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];

    printf("Enter a Word: ");

    gets(ch);

    int l, i, flag = 0;

    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        if(ch[i] != ch[l-i-1])
        {
            flag = 1;
            break;
        }

    }

    if(flag)
    {
        printf("%s is not palindrome",ch);
    }

    else
    {
        printf("%s is a palindrome",ch);
    }

    return 0;
}
