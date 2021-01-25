#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[1000];

    printf("Enter a string: \n");
    gets(ch1);

    strrev(ch1);

    printf("Reverse string is: \n");
    puts(ch1);

    return 0;
}
