#include <stdio.h>
#include <math.h>

int main() {
    int account_number, mortgage_term, total_amount_payable;
    float mortgage_amount, interest_rate, total_interest_payable, monthly_payment;

    account_number = 0;

    
    while(account_number != -1) {
        // Account number request
        printf("Enter account number: ");
        scanf("%d", &account_number);

        //If sentinel value is entered, end the program
        if (account_number == -1){
            printf("Program ended");
            break;
        }
        // Mortgage account request
        printf("Enter mortgage amount: $");
        scanf("%f", &mortgage_amount);

        // Mortgage account request
        printf("Enter mortgage term (in years): ");
        scanf("%d", &mortgage_term);

        // Interest rate request
        printf("Enter interest rate (as a percentage): ");
        scanf("%f", &interest_rate);

        // Calculate total interest payable and total amount payable
        total_interest_payable = mortgage_amount * interest_rate * mortgage_term;
        total_amount_payable = round(mortgage_amount + total_interest_payable);

        // Calculate required monthly payment
        monthly_payment = total_amount_payable / (mortgage_term * 12);

        // Print result
        printf("Account Number: %d\n", account_number);
        printf("Total Amount Payable: $%d\n", total_amount_payable);
        printf("Required Monthly Payment: $%d\n\n", (int) round(monthly_payment));
    }
    }


