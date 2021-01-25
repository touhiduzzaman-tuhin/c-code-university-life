#include <stdio.h>

int main()
{
    char str[1000], ch;
    int i, count = 0;

    gets(str);
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++){
        if(ch == str[i]){
            count++;
        }
    }
    printf("%c is %d times\n", ch, count);

    return 0;
}
