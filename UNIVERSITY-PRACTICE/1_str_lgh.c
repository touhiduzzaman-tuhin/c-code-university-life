#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000];

    int count;

    gets(ch);

    count = strlen(ch);


    printf("The String Length %d", count);

    return 0;

}
