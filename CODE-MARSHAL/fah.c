#include <stdio.h>

int main()
{
    int c;
    double f;

    scanf("%d", &c);

    f = (c*1.8) + 32;

    if(f > 98.4){
        printf("Fever\n");
    }
    else{
        printf("Not fever\n");
    }

    return 0;
}
