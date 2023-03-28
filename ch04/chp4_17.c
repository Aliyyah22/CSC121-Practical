#include <stdio.h>

int main()
{
    int account_number;
    double credit_limit, current_balance, new_credit_limit;

    account_number = 0;
    credit_limit = 0.0;
    current_balance = 0.0;

    // calculate new credit limit
    // print which customers have current balances that exceed their new credit limits

    while (account_number <= 0)
    {
        // ask for customer's account number, credit limit and current balance
        printf("Enter account number, credit limit and current balance: ");
        scanf("%d %lf %lf", &account_number, &credit_limit, &current_balance);

        // cut credit limit in half
        new_credit_limit = credit_limit / 2;

        printf("----------------------------------------\n");
        printf("\nCustomer %d \n", account_number);
        printf("Old credit limit: %.2f \n", credit_limit);
        printf("New credit limit: %.2f \n", new_credit_limit);
        printf("Current balance: %.2f \n", current_balance);
        printf("----------------------------------------\n\n");

        // check if current balance(amount customer owes the company) exceeds new credit limit
        if (current_balance > new_credit_limit)
        {
            // printf("Customer with Account number: %d\n still has usable credit", account_number);
            printf("Report\n");
            printf("----------------------------------------\n");
            printf("\nWarning: Current balance exceeds new credit limit\n");
            printf("----------------------------------------\n");
            
        }
        else
        {
            printf("Report");
            printf("----------------------------------------\n");
            printf("\nCurrent balance does not exceed new credit limit\n");
            printf("----------------------------------------\n");
        }
    }

}

