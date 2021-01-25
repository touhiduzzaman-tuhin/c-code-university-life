#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, l, upr = 0, lwr = 0, dig = 0, spc = 0, otr = 0;

    printf("Enter a string: \n");
    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            upr++;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            lwr++;
        }
        else if(ch[i] >= '0' && ch[i] <= '9'){
            dig++;
        }
        else if(ch[i] == ' '){
            spc++;
        }
        else{
            otr++;
        }
    }

    printf("Number of upper case: %d\n", upr);
    printf("Number of lower case: %d\n", lwr);
    printf("Number of digit: %d\n", dig);
    printf("Number of space: %d\n", spc);
    printf("Number of other character: %d\n", otr);

    return 0;
}
