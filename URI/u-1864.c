#include <stdio.h>

int main()
{
    int n, i;
    char ch[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%c", ch[i]);
    }
    printf("\n");

    return 0;
}
