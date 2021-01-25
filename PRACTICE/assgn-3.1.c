/*Sort Array in decreasing order.
input: a[5]={10,5,4,12,2}
Output: a[5]={12,10,5,4,2}*/


#include <stdio.h>

int main()
{
    int ara[5], n = 5, i, j, temp;

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(ara[i] < ara[j]){
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }

    return 0;
}

