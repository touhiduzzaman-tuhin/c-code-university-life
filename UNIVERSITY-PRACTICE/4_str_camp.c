#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1[1000];

    int n;

    printf("Enter First String: ");

    gets(ch);

    printf("Enter Second String: ");

    gets(ch1);

    n = strcmp(ch,ch1);

    if(n == 0)
    {
        printf("Yes Two String Equal");
    }

   else{
    printf("Two String is not Equal");
   }


    return 0;

}
