#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[1000], ch2[1000];

    printf("\nEnter first string: \n");
    gets(ch1);

    printf("\nEnter second string: \n");
    gets(ch2);

    strcpy(ch1, ch2);

    printf("\nThe first string is: \n");
    puts(ch1);

    printf("\nThe second string is: \n");
    puts(ch2);

    return 0;
}
