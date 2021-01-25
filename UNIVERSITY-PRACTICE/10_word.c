#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int i, l, w = 0;

    printf("Enter First String: ");

    gets(ch);

    l = strlen(ch);

    for(i = 0; i <= l; i++)
    {
        if(ch[i] == ' ' || ch[i] == '\n' || ch[i] == '\t')
        {
            w++;
        }
    }

    printf("Word %d\n", w+1);




    return 0;

}
