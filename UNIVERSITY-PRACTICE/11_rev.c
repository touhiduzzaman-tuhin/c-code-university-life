#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int i, l;

    printf("Enter First String: ");

    gets(ch);

    l = strlen(ch);

    for(i = l-1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }





    return 0;

}
