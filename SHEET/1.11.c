#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any lower case character : ");
    scanf("%c", &ch);

    printf("%c", ch-32);

    return 0;
}
