#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1;

    int l, i, flag = 0;

    printf("Enter a String: ");

    gets(ch);

    printf("Enter the Search Character: ");

    scanf("%c", &ch1);


    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        if(ch[i] == ch1)
        {
            flag = 1;
            break;
        }

    }

    if(flag)
    {
        printf("%c Character is Found at %d position",ch1, i+1);
    }

    else
    {
        printf("%c is not Found ",ch1);
    }

    return 0;
}
