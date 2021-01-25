#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, n;

    printf("Enter how many character: \n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%c", &ch[i]);
    }

    for(i = 0; i < n; i++){
        printf("%c", ch[i]);
    }

    return 0;
}
