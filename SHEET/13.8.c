#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, l, vow = 0, con = 0, dig = 0, spc = 0, otr = 0;

    printf("Enter a string: \n");
    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++){
        if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
            vow++;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            con++;
        }
        else if(ch[i] >= 'A' && ch[i] <= 'Z'){
            con++;
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

    printf("Number of vowel: %d\n", vow);
    printf("Number of consonant: %d\n", con);
    printf("Number of digit: %d\n", dig);
    printf("Number of space: %d\n", spc);
    printf("Number of other character: %d\n", otr);

    return 0;
}
