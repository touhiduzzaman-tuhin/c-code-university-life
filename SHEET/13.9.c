#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int l, i, a[26];

    printf("Enter a string: \n");
    gets(ch);

    for(i = 0; i < 26; i++){
        a[i] = 0;
    }

    l = strlen(ch);

    for(i = 0; i < l; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            a[ch[i]-97]++;
        }
        else if(ch[i] >= 'A' && ch[i] <= 'Z'){
            a[ch[i]-65]++;
        }
    }

    for(i = 0; i < 26; i++){
        if(a[i] > 0){
            printf("%c = %d\n", i+65, a[i]);
        }
    }

    return 0;
}
