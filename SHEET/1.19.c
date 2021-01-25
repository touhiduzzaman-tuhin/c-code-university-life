#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter any line of text : ");
    //scanf("%s", str);
    gets(str);

    printf("%s", str);

    return 0;
}
