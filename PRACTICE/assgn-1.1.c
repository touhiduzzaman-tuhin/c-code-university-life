/*C Program to Find the Second Largest & Smallest Elements in an Array.
input: a[5]={10,5,4,12,2}
output: 10,2*/

#include <stdio.h>

int main()
{
    int i, j, ara[100], temp;

    for(i = 0; i < 5; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(ara[i] < ara[j]){
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    printf("%d %d", ara[1], ara[4]);

    return 0;
}
