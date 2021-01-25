#include <stdio.h>

int main()
{
    char ch[100] = "education";
    int i;

    for(i = 0; ch[i] != '\0'; i++){
        if(ch[i] == 'n' || ch[i] == 'e'){
            printf("-");
            continue;
        }
        else if(ch[i] == 'o'){
            break;
        }
        printf("%c", ch[i]);
    }

    return 0;
}
