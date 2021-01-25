#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int count;

    printf("Enter First String: ");

    gets(ch);

    strupr(ch);



    printf("First String: ");
    puts(ch);



    return 0;

}
