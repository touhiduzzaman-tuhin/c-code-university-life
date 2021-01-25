#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, number_of_years, total_amount, mounthly_amount;

    printf("Enter the loan amount:\n ");
    scanf("%lf", &loan_amount);
    printf("Enter the interest rate:\n ");
    scanf("%lf", &interest_rate);
    printf("Enter the number of years:\n ");
    scanf("%lf", &number_of_years);

    total_amount = loan_amount + (loan_amount*interest_rate*number_of_years/100);
    mounthly_amount = total_amount/(number_of_years*12);

    printf("Total amount: %0.2lf\n", total_amount);
    printf("mounthly amount: %0.2lf\n", mounthly_amount);

    return 0;
}
