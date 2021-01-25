#include <stdio.h>

int main()
{
    int i;

    for(i = 1000; i > 0; i = i - 5){
        if(i % 25 == 0){
            printf("\n");
        }
        printf("%d ", i);
    }

    return 0;
}
//i--
//i % 5 == 0
