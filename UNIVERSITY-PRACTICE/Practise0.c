#include<stdio.h>

#include<string.h>

int main()
{
    char ch[10000], ch1, ch2;

    int l, i, j, k, c = -1, f = -1, a[256], max = 0;

    printf("Enter string: ");

    gets(ch);

    printf("Enter string: ");

    scanf("%c", &ch1);

    for(i = 0; i < l; i++)
    {
        if(ch[i] == ch1)
        {
            f = i;

        }
    }

    if(f == -1)
    {
        printf("not");
    }

    else{
        printf("%c = %d\n", ch1, f+1);
    }


    return 0;
}
