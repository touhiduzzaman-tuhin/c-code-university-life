#include <stdio.h>

int main()
{
    int a,i, v = 0, c = 0, d = 0, w = 0;

    char ch[1000];

    printf ("Enter the String Length: ");

    scanf("%d", &a);

    printf ("Enter your String\n");

    for(i = 0; i < a; i++)
    {
        scanf("%c", &ch[i]);
    }

    for(i = 0; i < a; i++)
    {
        if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' ||
           ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' ||
           ch[i] == 'o' || ch[i] == 'u')
        {

            v++;

        }

        else if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            c++;
        }

        else if (ch[i] >= '0' || ch[i] >= '9')
        {
            d++;
        }

        if (ch[i] == ' ' || ch[i] == '/0')
        {
            w++;
        }
    }

    printf("There are %d Vowels in this String\n", v);

    printf("There are %d Consonant in this String\n", c);

    printf("There are %d digits in this String\n", d);

    printf("There are %d words in this String\n", w+1);

    return0;
}
