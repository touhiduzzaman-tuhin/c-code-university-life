/*10.63 Modify the program shown in Example 10.8 (analyzing a line of text) so that it also counts the number of words
and the total number of characters in the line of text. (Note: A new word can be recognized by the presence of a
blank space followed by a nonwhitespace character.) Test the program using the text given in Example 10.8.*/

#include <stdio.h>
#include <string.h>

void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *pm, int *nw);

int main()
{
    char line[80];
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int whitespc = 0;
    int other = 0;
    int word = 0;
    int n;
    int i, count = 0;

    printf("Enter a line of text below: \n");
    gets(line);

    n = strlen(line);


    scan_line(line, &vowels, &consonants, &digits, &whitespc, &other, &word);

    printf("\nNo. of character: %d", n);
    printf("\nThe words are: \n");
    for(i = 0; line[i] != '\0'; i++){
        if(line[i] == ' '){
            printf("\n");
            count++;
        }
        else{
            if(line[i] == ',' || line[i] == '.'){
                continue;
            }
            else{
                printf("%c", line[i]);
            }
        }
    }
    printf("\nNo. of word: %d", count+1);
    printf("\nNo. of vowels: %d", vowels);
    printf("\nNo. of consonants: %d", consonants);
    printf("\nNo. of digits: %d", digits) ;
    printf("\nNo. of whitespace characters: %d", whitespc);
    printf("\nNo. of other characters: %d", other);

}

    void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *pm, int *nw)
{

    char c;
    int count = 0;

    while(( c = toupper(line[count])) != '\0'){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            ++ *pv;
        else if (c >= 'A' && c <= 'Z')
            ++ *pc;
        else if (c >= '0' && c <= '9')
            ++ *pd;
        else if (c == ' ' || c == '\t')
            ++ *pw;
        else
            ++ *pm;

        ++count;

    }

        return;

}
