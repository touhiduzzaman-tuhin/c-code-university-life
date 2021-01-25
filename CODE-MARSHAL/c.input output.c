#include <stdio.h>

int main()
{
    int n, c;
    float a;
    char ch;

    scanf("%d %d", &n, &c);
    scanf("%f", &a);
    scanf("%c", &ch);

    printf("%d %d", n, c);
    printf("%.2f", a);
    printf("%c", ch);

    return 0;
}
