#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, l, a[256];

    printf("Enter a string: \n");
    gets(ch);

    for(i = 0; i < 256; i++){
        a[i] = 0;
    }

    l = strlen(ch);

    for(i = 0; i < l; i++){
        a[ch[i]]++;
    }

    for(i = 0; i < 256; i++){
        if(a[i] > 0){
            printf("%c = %2d\n", i, a[i]);
        }
    }

    return 0;
}
