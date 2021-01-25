#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000], ch2, ch3;

    int i, j, k, l = 0,  l1 = 0, c = -1, f, a = 0, d = 0, s = 0, w = 0, v =0, cn = 0, ab[256];



    printf("Enter any String: ");

    gets(ch);

    printf("Enter any String: ");

    gets(ch1);



    for(i = 0; ch[i] != '\0'; i++)
    {
        l++;
    }



    for(i = 0; ch[i] != '\0'; i++);

    for(j = 0; ch1[j] != '\0'; j++, i++)
    {
       ch[i] = ch1[j];
    }

    ch[i] = '\0';

    puts(ch);

    puts(ch1);



    return 0;
}

