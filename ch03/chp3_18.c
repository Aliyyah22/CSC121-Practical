#include<stdio.h>
int main(){
    float gross_sales=0, salary;
//
    while(gross_sales!= -1){
        printf("Enter sales in dollars:$");
        scanf("%f", &gross_sales);
        
        if(gross_sales == -1){
            printf("Program ended");
            break;
        } 

        salary=(0.09*gross_sales)+200;
        printf("Your salary is %.2f\n",salary);
}
return 0;
}
/*
int main() {
    float sales, earnings;

    // initialize sales to 0
    sales = 0.00;

    while(sales != -1) {
        // Input the salesperson's gross sales for the week
        printf("Enter salary in dollars (-1 to end): $ ");
        scanf("%f", &sales);

        //If sentinel value is entered, end the program
        if (sales == -1){
            printf("Program ended \n");
            break;
        }

        // Calculate the salesperson's earnings
        earnings = 200 + (0.09 * sales);

        // Display the salesperson's earnings
        printf("Salary is: $%.2f\n", earnings);
    }

    return 0;
}
*/