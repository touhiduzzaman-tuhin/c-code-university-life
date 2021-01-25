#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int i, l, v = 0, c = 0;

    printf("Enter First String: ");

    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++)
    {
        if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            v++;
        }
        else if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {
            v++;
        }



        else if (ch[i] >= 'a' && ch[i] <= 'z' ){
            c++;
        }

        else if (ch[i] >= 'A' && ch[i] <= 'Z' ){
            c++;
        }
    }

    printf("Vowel %d\n", v);
    printf("Consonant %d\n", c);




    return 0;

}
