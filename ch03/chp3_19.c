#include<stdio.h>
int main(void){
    float interest,principal=0,rate=0, days=0;

    while(principal!= -1){
        printf("Enter loan principal (-1 to end): \n");
        scanf("%f", &principal);

        if(principal==-1){
            printf("Program ended");
            break;
        }
        printf("Enter interest rate: \n");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: \n");
        scanf("%f", &days);

        interest = principal*rate*(days/365);
        printf("The interest charge is $%.2f\n", interest);
        }
return 0;
}
/*#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;
   
    // initialize principal to 0
    principal = 0;

    // Input the principal, rate, and days for each loan
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    // If sentinel value is entered, end the program
    if (principal == -1){
        printf("Program ended");
    }

    while(principal != -1) {

        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf(" %d", &days);

        // Calculate the simple interest for each loan
        interest = principal * rate * days / 365;

        // Display the simple interest for each loan
        printf("The interest charge is $%.2f\n", interest);

}
return 0;
}
*/