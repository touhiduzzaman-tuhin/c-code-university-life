#include<stdio.h>

#include<string.h>

int main()
{
    char ch[1000], ch1;

    int l, i;

    printf("Enter your string: ");

    gets(ch);

    printf("Enter the word: ");

    scanf("%c", &ch1);

    l = strlen(ch);

    for(i = 0; i < l && ch[i] != ch1; i++);

    while(i < l)
  	{
  		ch[i] = ch[i + 1];
		i++;
	}

    printf("\nString after removing '%c': \n%s", ch1, ch);

    return 0;
}
