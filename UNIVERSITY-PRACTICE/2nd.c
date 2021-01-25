#include <stdio.h>

int main()
{
    int a, i, c = 0;

    char ch[1000];

    printf ("Enter the String Length: ");

    scanf("%d", &a);

    printf ("Enter your String\n");

    for(i = 0; i < a; i++)
    {
        scanf("%c", &ch[i]);

        c++;
    }



    for(i = c-1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }

    return 0;
}
