/*Write a code to check whether a string is a palindrome or not.
Input: “eye”
Output: palindrome
Input: “mother”
Output: not a palindrome*/


#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i;
    gets(a);
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b) == 0){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }

    return 0;
}
