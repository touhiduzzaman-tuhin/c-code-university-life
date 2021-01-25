#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[1000], ch2[1000];

    gets(ch1);

    strcpy(ch2, ch1);
    strrev(ch1);

    if(strcmp(ch1, ch2) == 0){
        printf("pal");
    }
    else{
        printf("not");
    }

    return 0;
}
