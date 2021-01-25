#include <stdio.h>
#include <math.h>


int prime(int n)
{
    int i, count = 1, num = sqrt(n);

    for(i = 2; i <= num; i++){
        if(n % i == 0){
            count = 0;
            break;
        }
    }

    return count;
}

int main()
{
    int n, result;

    scanf("%d", &n);

    result = prime(n);

    if(result == 0){
        printf("0\n");
    }
    else{
        printf("1\n");
    }


    return 0;
}
