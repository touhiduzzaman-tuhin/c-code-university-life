#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char ch1[1000], ch2[1000];

    printf("\nThe first string is: \n");
    gets(ch1);

    printf("\nThe second string is: \n");
    gets(ch2);

    n = strcmpi(ch1, ch2);

    printf("%d\n", n);

    return 0;
}
