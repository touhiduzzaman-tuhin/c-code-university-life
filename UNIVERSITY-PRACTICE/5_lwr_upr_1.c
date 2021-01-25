#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int i, l;

    printf("Enter First String: ");

    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            printf("%c", ch[i] -32);
        }

        else{
            printf("%c", ch[i]);
        }
    }





    return 0;

}
