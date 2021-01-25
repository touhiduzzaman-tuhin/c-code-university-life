#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int i, l, a = 0, d = 0, s = 0;

    printf("Enter First String: ");

    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        {
            a++;
        }

        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            a++;
        }

        else if(ch[i] >= '0' && ch[i] <= '9')
        {
            d++;
        }
        else{
            s++;
        }
    }

    printf("Alphabet %d\n", a);
    printf("Digit %d\n", d);
    printf("Special %d\n", s);



    return 0;

}
