#include <stdio.h>
#include <string.h>

int main()
{
  	char ch[100], ch1;
  	int i, l, j;

  	printf("\n Please Enter any String :  ");
  	gets(ch);

  	printf("\n Please Enter a Character :  ");
  	scanf("%c", &ch1);

	l = strlen(ch);

  	for(i = 0; i < l; i++)
	{
		if(ch[i] == ch1)
		{
			for(j = i; j < l; j++)
			{
				ch[j] = ch[j + 1];
			}
			l--;
			i--;
		}
	}
	printf("\n The Final String after Removing '%c' = %s ", ch1, ch);

  	return 0;
}
