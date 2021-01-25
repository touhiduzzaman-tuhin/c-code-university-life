/*10.69 Modify the program shown in Example 10.26 (reordering a list of strings) so that the list of strings can be
rearranged into either alphabetical or reverse-alphabetical order. Use pointer notation to represent the beginning
of each string. Include a menu that will allow the user to select which rearrangement will be used each time the
program is executed. Test the program using the data provided in Example 9.20.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, n = 0;
    char *x[10];
    char *temp;
    int item, a;
    char ch[20];

    printf("For alphabetic result enter even number :\n");
    printf("For reverse alphabetic result enter odd number:\n");
    scanf("%d", &a);

    printf("Enter each string on a separate line below\n\n");
    printf("Type \'END\' when finished \n\n");

    do {

        x[n] = (char *)  malloc(12 * sizeof(char));
        printf("string %d: ", n+1);
        scanf("%s", x[n]);
    }

    while(strcmp(x[n++],"END"));


    for(item = 0; item < n; ++item){
        for(i = item; i < n; ++i){
            if(a % 2 == 0){
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
        }
    }

    printf("\n\nReordered List of Strings : \n");

    for(i = 0; i < n; ++i){
        printf("\nstring %d: %s", i+1, x[i]);
    }

    return 0;
}

