/*Suppose user input a binary string, and your code print out its decimal equivalent.
input: 101
output: 5*/


#include <stdio.h>
#include <math.h>

int main()
{
    int binary_number, m, sum = 0, i;

    printf("Enter any binary number which(0s and 1s)\n");

    scanf("%d", &binary_number);

    for(i = 0; binary_number > 0;  i++){
        m = binary_number % 10;
        sum = sum + m * pow(2,i);
        binary_number = binary_number/10;
    }

    printf("%d", sum);


    return 0;
}
