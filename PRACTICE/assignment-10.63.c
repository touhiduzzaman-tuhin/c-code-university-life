#include <stdio.h>
#include <ctype.h>
#include <string.h>

void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *Pm, int *nw);

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

    printf("Enter a line of text below: \n");
    gets(line);

    n = strlen(line);

    scan_line(line, &vowels, &consonants, &digits, &whitespc, &other, &word);

    printf("\nNo. of character: %d", n);
    printf("\nNo. of vowels: %d", vowels);
    printf("\nNo. of consonants: %d", consonants);
    printf("\nNo. of digits: %d", digits) ;
    printf("\nNo. of whitespace characters: %d", whitespc);
    printf("\nNo. of other characters: %d", other);
    printf("\nNo. of word: %d", word);


}

    void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *Pm, int *nw)
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
        else if(line == ' ')
            ++ *nw;
        /*else{
            ++ *pm;
        }*/

        ++count;

    }

        return;

}
