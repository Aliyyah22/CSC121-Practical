#include <stdio.h>

int main() {
   // Declare variables
    int hours, overtime;
    float rate, gross_pay;

    // initialize hours to 0
    hours = 0;

    //Run program if sentinel value is not called
    while(hours != -1) {

        printf("Enter hours worked for employee (-1 to end): ");
        scanf("%d", &hours);

        //If sentinel value is entered, end the program
        if (hours == -1){
            printf("Program ended");
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);
        // Prompt user for input

        // Calculate gross pay
        if (hours <= 40) {
            gross_pay = hours * rate;
        } else {
            overtime = hours - 40;
            gross_pay = 40 * rate + overtime * rate * 1.5;
        }
        // Display results
        printf("Salary is : $%.2f\n", gross_pay);

    }
    return 0;
}
