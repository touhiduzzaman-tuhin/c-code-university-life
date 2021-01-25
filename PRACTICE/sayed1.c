#include<stdio.h>
int main(){
    char str[500000];
    int i;
    gets(str);
    int count=0;
    //scanf("%[^\n]s",&str);
    //printf("\n%s\n",str);
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);

}
