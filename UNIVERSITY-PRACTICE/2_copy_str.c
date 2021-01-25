#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int count;

    printf("Enter First String: ");

    gets(ch);

    printf("Enter Second String: ");

    gets(ch1);

    strcpy(ch,ch1);

    printf("First String: ");
    puts(ch);

    printf("Second String: ");
    puts(ch1);




    return 0;

}
