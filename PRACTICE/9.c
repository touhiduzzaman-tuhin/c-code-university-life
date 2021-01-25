#include <stdio.h>

int main()
{
    char str[20];
    int count = 0, ara[26] = {0};

    gets(str);

    while(str[count] != '\0')
    {
        if(str[count] >= 'A' && str[count] <= 'Z'){
            ara[str[count]-'A']++;
        }
        count++;
    }

    for(count = 0; count < 26; count++){
        if(ara[count] != 0){
            printf("%c\t %d\n", count+'A', ara[count]);
        }
    }

    return 0;
}
