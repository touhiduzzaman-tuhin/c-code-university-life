#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000], ch2, ch3;

    int i, l, j, k, c = 0, a[256];

    printf("Enter a string: ");

    gets(ch);

    printf("Enter a string: ");

    scanf("%c", &ch2);

    getchar();

    printf("Enter a string: ");

    scanf("%c", &ch3);



    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        for(j = i+1; ch[j] != '\0'; j++)
        {
            if(ch[i] == ch2)
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

