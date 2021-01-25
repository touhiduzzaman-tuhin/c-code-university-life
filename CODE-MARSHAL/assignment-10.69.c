#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reorder (int n, char *x[]);
int main( )
{
    int i, n = 0, a;
    char *x[10];
    char ch[20];

    printf("Enter even == alphabetical or odd == reverse alphabetical\n");

    gets(ch);
    a = strlen(ch);

    printf("Enter each string on a separate line below\n\n");
    printf("Type \'END\' when finished \n\n");

    do {

        x[n] = (char *)  malloc(12 * sizeof(char));
        printf("string %d: ", n+1);
        scanf("%s", x[n]);
    }

    while(strcmp(x[n++],"END"));

    reorder(--n, x);

    printf("\n\nReordered List of Strings : \n");

    for(i = 0; i < n; ++i)

    printf("\nstring %d: %s", i+1, x[i]);

    return  0;
}

void reorder(int n, char *x[])
{
    char *temp;
    int i, item;

    for(item = 0; item < n-1; ++item)

        for(i = item+1; i < n; ++i)

            if(a == 12){
                if(strcmp(x[item], x[i]) > 0){

                    temp = x[item];
                    x[item] = x[i];
                    x[i] = temp;
                }
            }
             else{
                if(strcmp(x[item], x[i]) < 0){

                temp = x[item];
                x[item] = x[i];
                x[i] = temp;
            }
             }
    return;
}

