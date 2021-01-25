#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[10000], ch2, ch3;

    int i, j, k, l, c = -1, a[256];

    printf("Enter a String: ");

    gets(ch);

    printf("Enter a String: ");

    scanf("%c", &ch2);

    getchar();

    printf("Enter a String: ");

    scanf("%c", &ch3);


    l = strlen(ch);


    for(i = 0; i < l; i++)
    {
        for(j = i+1; ch[j] != '\0'; j++)
        {
            if(ch[j] == ch[i])
            {
                for(k = j; ch[k] != '\0'; k++)
                {
                    ch[k] = ch[k+1];
                }
            }
        }
    }


    puts(ch);


    return 0;
}
