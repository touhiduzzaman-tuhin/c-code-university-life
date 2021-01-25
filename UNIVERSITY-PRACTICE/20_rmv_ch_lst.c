#include <stdio.h>

#include <string.h>

int main()
{
  	char ch[100], ch1;
  	int i, c, l;
  	c = -1;

  	printf("Please Enter any String :  ");
  	gets(ch);

  	printf("Please Enter a Character  :  ");
  	scanf("%c", &ch1);

	l  = strlen(ch);

  	for(i = 0; i < l; i++)
  	{
  		if(ch[i] == ch1)
		{
  			c = i;
 		}
	}
    if(c != -1)
  	{
  		i = c;

	  	while(i < l)
  		{
  			ch[i] = ch[i + 1];
			i++;
		}
	}

	printf("\n The Final String after Removing'%c' = %s ", ch1, ch);
  	return 0;
}
