#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int l, i;

    printf("Enter a string: \n");
    gets(ch);

    l = strlen(ch);

    for(i = 0; i < l; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            printf("%c", ch[i]+32);
        }
        else{
            printf("%c", ch[i]);
        }
    }

    return 0;
}
