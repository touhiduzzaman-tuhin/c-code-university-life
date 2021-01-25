#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, j, count;

    printf("Enter a string: \n");
    gets(ch);

    count = strlen(ch);

    for(i = 0; i < count; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            printf("%c", ch[i]- 32);
        }
        else{
            printf("%c", ch[i]);
        }
    }

    return 0;
}
