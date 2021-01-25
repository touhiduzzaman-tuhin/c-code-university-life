#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000];

    int min = 0, i, l, a[256];

    printf("Enter your string: ");

    gets(ch);

    for(i = 0; i < 256; i++)
    {
        a[i] = 0;
    }

    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        a[ch[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(a[min] != 0)
        {
            if(a[min] == 0 || a[i] < a[min])
            {
               min = i;
            }
        }


    }

    printf("%c ", min);

    return 0;
}
