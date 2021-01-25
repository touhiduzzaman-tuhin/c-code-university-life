#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000], ch2, ch3;

    int i, j, k, l, l1, c = -1, f, m = 0;

    printf("Enter any string: ");

    gets(ch);

    printf("Enter any word: ");

    gets(ch1);


    l = strlen(ch);
    l1 = strlen(ch1);



    for(i = 0; i < l-l1; i++)
    {
        f = 1;

        for(j = 0; j < l1; j++)
        {

            if(ch[i+j] != ch1[j])
            {

                    f = 0;
                    break;

            }

        }

        if(f == 1)
        {
            m++;
        }
    }

    printf("%s found %d times\n", ch1, m);



    return 0;
}
